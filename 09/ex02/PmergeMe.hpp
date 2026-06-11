/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrauh <nrauh@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:03:12 by nrauh             #+#    #+#             */
/*   Updated: 2026/06/11 15:04:08 by nrauh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <sys/time.h>
#include <iomanip>

class PmergeMe {
private:
    std::vector<int> vecInput;
    std::deque<int> deqInput;
    
    std::vector<int> vecSorted;
    std::deque<int> deqSorted;

    double vecTime;
    double deqTime;

    // Forbidden Orthodox Canonical Form basics (Private to prevent instantiation of utility)
    PmergeMe();
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& src);

public:
    // Utility functions
    static bool parseInput(int ac, char **av, std::vector<int>& vec, std::deque<int>& deq);
    static int  getJacobsthalNumber(int n);

    // Vector Implementation
    static void sortVector(std::vector<int>& vec);
    static void fordJohnsonVector(std::vector<int>& vec, size_t groupSize);
    static void binaryInsertVector(std::vector<int>& vec, size_t groupSize, size_t mainElements, size_t pendElements, size_t oddElementIdx, bool hasOdd);

    // Deque Implementation
    static void sortDeque(std::deque<int>& deq);
    static void fordJohnsonDeque(std::deque<int>& deq, size_t groupSize);
    static void binaryInsertDeque(std::deque<int>& deq, size_t groupSize, size_t mainElements, size_t pendElements, size_t oddElementIdx, bool hasOdd);
};
