/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:15:16 by yipan             #+#    #+#             */
/*   Updated: 2025/12/29 15:14:57 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account:: _totalAmount = 0;
int	Account:: _totalNbDeposits = 0;
int	Account:: _totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	std::time_t	now = std::time(NULL);//time_t store time stamp, std::time works like gettime
	std::tm	*time = std::localtime(&now);//convert timestamp into readable time struct
	char	buffer[20];//tmp buffer for print use

	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", time);
	std::cout << "[" << buffer << "] ";
}
/*
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;
*/
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

/*
[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
*/
void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

/*
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
*/
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

/*
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
*/
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit;
	
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount
		<< "nb_deposits:" << _nbDeposits << std::endl;
}

/*
[19920104_091532] index:0;p_amount:47;withdrawal:refused
[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
*/
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
