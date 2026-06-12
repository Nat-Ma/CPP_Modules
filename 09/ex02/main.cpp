/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:06:39 by nrauh             #+#    #+#             */
/*   Updated: 2026/06/11 16:31:49 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// High precision timing helper using standard sys/time.h compatible configurations
double getTimeInUs(struct timeval start, struct timeval end) {
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    return (seconds * 1e6) + microseconds;
}

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Error: Missing parameters." << std::endl;
        return 1;
    }

    std::vector<int> vecData;
    std::deque<int> deqData;

	// checks if input is valid (>0 <INT_MAX, Digits only) and adds them to vec and deq
    if (!PmergeMe::parseInput(ac, av, vecData, deqData)) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    // Display original raw sequence status
    std::cout << "Before: ";
    for (size_t i = 0; i < vecData.size(); ++i) {
        std::cout << vecData[i] << " ";
    }
    std::cout << std::endl;

    // Vector Execution & Benchmark tracking
    struct timeval startVec, endVec;
    gettimeofday(&startVec, NULL);
    PmergeMe::sortVector(vecData);
    gettimeofday(&endVec, NULL);
    double durationVec = getTimeInUs(startVec, endVec);

    // Deque Execution & Benchmark tracking
    struct timeval startDeq, endDeq;
    gettimeofday(&startDeq, NULL);
    PmergeMe::sortDeque(deqData);
    gettimeofday(&endDeq, NULL);
    double durationDeq = getTimeInUs(startDeq, endDeq);

    // Display sorted result check status 
    std::cout << "After:  ";
    for (size_t i = 0; i < vecData.size(); ++i) {
        std::cout << vecData[i] << " ";
    }
    std::cout << std::endl;

    // Explicitly styled benchmarks reporting metrics output data
	// vector is faster, cause it uses a linear layout and calculations are a simple mathematical calculation
	// loads next few numbers and loads them into its ultra fast "cache" memory
    std::cout << "Time to process a range of " << vecData.size() 
              << " elements with std::vector : " << std::fixed << std::setprecision(5) 
              << durationVec << " us" << std::endl;

	// dqueue is a lot slower, cause it is chunks of independent memory linked by a central map of pointers
	// looking for values requires multiple steps cause blocks are scattered across the RAM
	// has to constantly clear cache and load data from the slow main RAM
	// binary insert() makes deque very slow cause mid requires stepping through central map, find correct chunk etc...
    std::cout << "Time to process a range of " << deqData.size() 
              << " elements with std::deque  : " << std::fixed << std::setprecision(5) 
              << durationDeq << " us" << std::endl;

    return 0;
}
