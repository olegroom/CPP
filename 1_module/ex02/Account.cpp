#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalNbDeposits = 0;

void	Account::_displayTimestamp() {
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon + 1
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}

bool	Account::makeWithdrawal(int withdrawal) {
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	return (true);
}

void	Account::makeDeposit(int deposit) {
	_totalAmount += deposit;
	this->_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account(int initial_dep) {
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_totalAmount += initial_dep;
	this->_amount = initial_dep;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int		Account::getNbAccounts() {
	return (_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return (_totalAmount);
}

int		Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}