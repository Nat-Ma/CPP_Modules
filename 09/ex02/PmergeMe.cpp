/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:04:20 by nrauh             #+#    #+#             */
/*   Updated: 2026/06/11 16:41:29 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Generates the customized Jacobsthal numbers sequence
int PmergeMe::getJacobsthalNumber(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return getJacobsthalNumber(n - 1) + 2 * getJacobsthalNumber(n - 2);
}

// ensures that numbers are bigger than 0 and not bigger as int max
bool PmergeMe::parseInput(int ac, char **av, std::vector<int>& vec, std::deque<int>& deq) {
    for (int i = 1; i < ac; ++i) {
        std::string arg(av[i]);
        if (arg.empty()) return false;
        
        // Ensure only digits are present
        for (size_t j = 0; j < arg.length(); ++j) {
            if (!std::isdigit(arg[j])) return false;
        }
        
        std::stringstream ss(arg);
        long val;
        if (!(ss >> val) || val < 0 || val > 2147483647) {
            return false;
        }
        
        vec.push_back(static_cast<int>(val));
        deq.push_back(static_cast<int>(val));
    }
    return true;
}

// =============================================================================
// VECTOR IMPLEMENTATION
// =============================================================================

void PmergeMe::sortVector(std::vector<int>& vec) {
    if (vec.size() <= 1) return;
    fordJohnsonVector(vec, 1);
}

// groupSize defines the element pairs
void PmergeMe::fordJohnsonVector(std::vector<int>& vec, size_t groupSize) {
    size_t numElements = vec.size() / groupSize;
    if (numElements < 2) return;

	// defines how many pairs can be build
    size_t numPairs = numElements / 2;
	// calculates if and where the leftover odd element starts in memory
    bool hasOdd = (numElements % 2 != 0);
    size_t oddElementIdx = numPairs * 2 * groupSize;

    // Step 1: Compare pairs and ensure a_x > b_x
    // Pair configuration: [ b_x (group) ][ a_x (group) ]
    for (size_t i = 0; i < numPairs; ++i) {
        size_t bIdx = i * 2 * groupSize;
        size_t aIdx = bIdx + groupSize;
        
        // Compare the last element of each group (the structural identifiers)
        if (vec[bIdx + groupSize - 1] > vec[aIdx + groupSize - 1]) {
            // Swap entire blocks
            for (size_t g = 0; g < groupSize; ++g) {
                std::swap(vec[bIdx + g], vec[aIdx + g]);
            }
        }
    }

    // Recursively sort the pairs based on the 'a' values
    fordJohnsonVector(vec, groupSize * 2);

    // Step 2 & 3: Insertion phase using Jacobsthal math
    binaryInsertVector(vec, groupSize, numPairs, numPairs, oddElementIdx, hasOdd);
}

void PmergeMe::binaryInsertVector(std::vector<int>& vec, size_t groupSize, size_t mainElements, size_t pendElements, size_t oddElementIdx, bool hasOdd) {
    // Copy main chain elements out to structure an organized insertion
    // main chain starts with b1, followed by all a elements.
    std::vector<int> mainChain;
    std::vector<std::vector<int> > pendChain;

    // Push b1
    for (size_t g = 0; g < groupSize; ++g) {
        mainChain.push_back(vec[g]);
    }
    // Push remaining a elements
    for (size_t i = 0; i < mainElements; ++i) {
        size_t aStart = (i * 2 * groupSize) + groupSize;
        for (size_t g = 0; g < groupSize; ++g) {
            mainChain.push_back(vec[aStart + g]);
        }
    }

    // Extract pend elements (b2 down to bn)
    for (size_t i = 1; i < pendElements; ++i) {
        std::vector<int> item;
        size_t bStart = i * 2 * groupSize;
        for (size_t g = 0; g < groupSize; ++g) {
            item.push_back(vec[bStart + g]);
        }
        pendChain.push_back(item);
    }

    // Handle odd element inclusion into pend if present
    if (hasOdd) {
        std::vector<int> item;
        for (size_t g = 0; g < groupSize; ++g) {
            item.push_back(vec[oddElementIdx + g]);
        }
        pendChain.push_back(item);
    }

    // Perform Jacobsthal insertion order sequence
    size_t insertedCount = 0;
    int jIndex = 3; // Start looking up from J_3

    while (insertedCount < pendChain.size()) {
        size_t currJ = getJacobsthalNumber(jIndex);
        size_t prevJ = getJacobsthalNumber(jIndex - 1);
        size_t groupToInsert = currJ - prevJ;

        // Establish the backward indexing bounds
        size_t startOffset = prevJ - 1 + groupToInsert;
        if (startOffset > pendChain.size()) {
            startOffset = pendChain.size();
        }

        size_t endOffset = prevJ - 1;

        // Run backwards insertion within the designated segment range
        for (size_t i = startOffset; i > endOffset; --i) {
            std::vector<int>& item = pendChain[i - 1];
            int itemValue = item[groupSize - 1];

            // Define dynamic upper-bound range slice for safety optimization
            size_t highRange = mainChain.size() / groupSize;
            
            // Standard safe Binary Search Loop execution
            size_t low = 0;
            size_t high = highRange;
            while (low < high) {
                size_t mid = low + (high - low) / 2;
                int midValue = mainChain[(mid * groupSize) + groupSize - 1];
                if (itemValue < midValue) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            }
            // Insert item into determined position inside mainChain
            mainChain.insert(mainChain.begin() + (low * groupSize), item.begin(), item.end());
            insertedCount++;
        }
        jIndex++;
    }
    // Update structural reference array back
    vec = mainChain;
}

// =============================================================================
// DEQUE IMPLEMENTATION
// =============================================================================

void PmergeMe::sortDeque(std::deque<int>& deq) {
    if (deq.size() <= 1) return;
    fordJohnsonDeque(deq, 1);
}

void PmergeMe::fordJohnsonDeque(std::deque<int>& deq, size_t groupSize) {
    size_t numElements = deq.size() / groupSize;
    if (numElements < 2) return;

    size_t numPairs = numElements / 2;
    bool hasOdd = (numElements % 2 != 0);
    size_t oddElementIdx = numPairs * 2 * groupSize;

    for (size_t i = 0; i < numPairs; ++i) { // 8 5 4 3 | 1 2 6 7 | 9
        size_t bIdx = i * 2 * groupSize;
        size_t aIdx = bIdx + groupSize;
        
        if (deq[bIdx + groupSize - 1] > deq[aIdx + groupSize - 1]) {
            for (size_t g = 0; g < groupSize; ++g) {
                std::swap(deq[bIdx + g], deq[aIdx + g]);
            }
        }
    }

    fordJohnsonDeque(deq, groupSize * 2);
    binaryInsertDeque(deq, groupSize, numPairs, numPairs, oddElementIdx, hasOdd);
}

void PmergeMe::binaryInsertDeque(std::deque<int>& deq, size_t groupSize, size_t mainElements, size_t pendElements, size_t oddElementIdx, bool hasOdd) {
    std::deque<int> mainChain;
    std::deque<std::deque<int> > pendChain;

    for (size_t g = 0; g < groupSize; ++g) { // 8 5 4 3 | 1 2 6 7 | 9
        mainChain.push_back(deq[g]);
    }
    for (size_t i = 0; i < mainElements; ++i) {
        size_t aStart = (i * 2 * groupSize) + groupSize;
        for (size_t g = 0; g < groupSize; ++g) {
            mainChain.push_back(deq[aStart + g]);
        }
    }

    for (size_t i = 1; i < pendElements; ++i) {
        std::deque<int> item;
        size_t bStart = i * 2 * groupSize;
        for (size_t g = 0; g < groupSize; ++g) {
            item.push_back(deq[bStart + g]);
        }
        pendChain.push_back(item);
    }

    if (hasOdd) {
        std::deque<int> item;
        for (size_t g = 0; g < groupSize; ++g) {
            item.push_back(deq[oddElementIdx + g]);
        }
        pendChain.push_back(item);
    }

    size_t insertedCount = 0;
    int jIndex = 3;

    while (insertedCount < pendChain.size()) {
        size_t currJ = getJacobsthalNumber(jIndex);
        size_t prevJ = getJacobsthalNumber(jIndex - 1);
        size_t groupToInsert = currJ - prevJ;

        size_t startOffset = prevJ - 1 + groupToInsert;
        if (startOffset > pendChain.size()) {
            startOffset = pendChain.size();
        }

        size_t endOffset = prevJ - 1;

        for (size_t i = startOffset; i > endOffset; --i) {
            std::deque<int>& item = pendChain[i - 1];
            int itemValue = item[groupSize - 1];

            size_t highRange = mainChain.size() / groupSize;
            
            size_t low = 0;
            size_t high = highRange;
            while (low < high) {
                size_t mid = low + (high - low) / 2;
                int midValue = mainChain[(mid * groupSize) + groupSize - 1];
                if (itemValue < midValue) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            }
            mainChain.insert(mainChain.begin() + (low * groupSize), item.begin(), item.end());
            insertedCount++;
        }
        jIndex++;
    }
    deq = mainChain;
}
