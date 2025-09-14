/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 11:31:01 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/07 13:36:47 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex 
		<< ";amount:" << this->_amount
		<< ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }
int	Account::checkAmount( void ) const { return _amount; }

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;
	if (withdrawal < Account::checkAmount())
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}else{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
}

void	Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(NULL);
	std::tm		*time_now = std::localtime(&t);

	std::cout << "[" << time_now->tm_year + 1900 
		<< ((time_now->tm_mon + 1 > 9) ? "" : "0") << (time_now->tm_mon + 1)
		<< ((time_now->tm_mday > 9) ? "" : "0") << time_now->tm_mday
		<< "_"
		<< ((time_now->tm_hour > 9) ? "" : "0") << time_now->tm_hour
		<< ((time_now->tm_min > 9) ? "" : "0") << time_now->tm_min
		<< ((time_now->tm_sec > 9) ? "" : "0") << time_now->tm_sec << "]";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	std::cout << " index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount;

	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	std::cout << ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:" <<  Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals()
		<< std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
