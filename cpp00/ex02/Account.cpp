/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 04:39:13 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/25 04:39:27 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

//init of static members
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// constructor
Account::Account(int initial_deposit)
    :  _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";created" << std::endl;
}

// destructor
Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
    << ";amount:" << _amount << ";closed" << std::endl;
}

// member functions
int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbDeposits;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
        << ";total:" << _totalAmount
        << ";deposits:" << _totalNbDeposits
        << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

//deposit function
void	Account::makeDeposit(int deposit)
{
    if(deposit > 0)
    {
        int p_amount = _amount;
        _amount += deposit;
        _nbDeposits++;
        _totalNbDeposits++;
        _totalAmount += deposit;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
            << ";p_amount:" << p_amount
            << ";deposit:" << deposit
            << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << std::endl;
    }
}
// withdrawal function
bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if(withdrawal > 0 && withdrawal <= _amount)
    {
        int p_amount = _amount;
        _amount -=withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex
            << ";p_amount:" << p_amount
            << ";withdrawal:" << withdrawal
            << ";amount:" << _amount
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }else
    {
        std::cout << "index:" << _accountIndex
            << ";p_amount:" << _amount
            << ";withdrawal:refused" << std::endl;
        return false;
    }
}
// check amount function
int		Account::checkAmount() const
{
    return _amount;
}
// display status function
void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals << std::endl;     
}

// function to fet current time
void	Account::_displayTimestamp( void )
{
    std::time_t curtime = std::time(0);
    std::tm* lt = std::localtime(&curtime);

    std::cout << "["
        << 1900 + lt->tm_year
        << 1 + lt->tm_mon
        << lt->tm_mday << "_"
        << lt->tm_hour
        << lt->tm_min
        << lt->tm_sec
        << "] ";
}
