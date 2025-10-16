/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:37:57 by stempels          #+#    #+#             */
/*   Updated: 2025/10/16 17:01:44 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int deposit){
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = deposit;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			<< "amount:" << _amount << ';'
			<< "created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			<< "amount:" << _amount << ';'
			<< "closed" << std::endl;
}

void	Account::_displayTimestamp(void){
	std::time_t	timestamp;
	std::tm *local;

	std::time(&timestamp);
	local = std::localtime(&timestamp);
	std::cout << '[' << std::put_time(local, "%Y%m%d_%H%M%S") << ']';
	return ;
}

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (_totalAmount);
}

int	Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';'
			<< "total:" << _totalAmount << ';'
			<< "deposits:" << _totalNbDeposits << ';'
			<< "withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit){
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			<< "p_amount:" << _amount << ';'
			<< "deposit:" << deposit << ';'
			<< "amount:" << _amount << ';'
			<< "nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			<< "p_amount:" << _amount << ';'
			<< "withdrawal:";
	if (_amount < withdrawal){
		std::cout << "refused" << std::endl;
		return (0);
	}
	else {
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ';'
			<< "amount:" << _amount << ';'
			<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (1);
}

int		Account::checkAmount(void) const {
	return (_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
			<< "amount:" << _amount << ';'
			<< "deposits:" << _nbDeposits << ';'
			<< "withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}
