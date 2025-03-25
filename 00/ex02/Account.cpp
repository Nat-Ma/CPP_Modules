/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:38:19 by natalierauh       #+#    #+#             */
/*   Updated: 2025/03/25 16:38:12 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts;
	_amount += initial_deposit;
	_nbDeposits = 0;;
	_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void ) {};

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
};

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
};

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
};

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
};

void	Account::displayAccountsInfos( void )
{
	std::cout << GREEN << "ACCOUNTS INFOS" << RESET << std::endl;
	std::cout << "Nb of Accounts: " << Account::getNbAccounts() << std::endl;
	std::cout << "Total Amount: " << Account::getTotalAmount() << std::endl;
	std::cout << "Total Nb of Deposits: " << Account::getNbDeposits() << std::endl;
	std::cout << "Total Nb Withdrawls: " << Account::getNbWithdrawals() << std::endl;
};

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
};

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > _amount)
		return false;
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return true;
};

int		Account::checkAmount( void ) const
{
	return _amount;
};

void	Account::displayStatus( void ) const
{
	std::cout << BLUE << "INSTANCE ACCOUNT" << RESET << std::endl;
	std::cout << "Account Index: " << _accountIndex << std::endl;
    std::cout << "Amount: " << _amount << std::endl;
    std::cout << "Number of Deposits: " << _nbDeposits << std::endl;
    std::cout << "Number of Withdrawals: " << _nbWithdrawals << std::endl;
};
