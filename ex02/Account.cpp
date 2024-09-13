/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:03:30 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/13 14:30:44 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "string"
#include "iostream"
#include "ctime"
#define CYAN "\033[36m"
#define RESET "\033[0m"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

	/*****************************************************************/
	/*                        Helpers                                */
	/*****************************************************************/

	void	print_bloc(std::string str, int nb)
	{
		std::cout << str << ":" << CYAN << nb << RESET << ";";
	}

	/*****************************************************************/
	/*                   Contructors/Destructors                     */
	/*****************************************************************/

	Account::Account( int initial_deposit )
	{
		this->_amount = initial_deposit;
		this->_accountIndex = Account::getNbAccounts();
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("amount", this->_amount);
		std::cout << "created" << std::endl;
		_nbAccounts += 1;
		_totalAmount += initial_deposit;
	}
	Account::~Account( void )
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("amount", this->_amount);
		std::cout << "closed" << std::endl;
		_nbAccounts -= 1;
		_totalAmount -= this->_amount;
	}
	Account::Account( void )
	{
			std::cout << "\e[0;31mAccount default destructor called\e[0m"
				<< std::endl;
	}

	/*****************************************************************/
	/*                        GETERS                                 */
	/*****************************************************************/

	int	Account::getNbAccounts( void )
	{
		return (_nbAccounts);
	}

	int	Account::getTotalAmount( void )
	{
		return (_totalAmount);
	}

	int	Account::getNbDeposits( void )
	{
		return (_totalNbDeposits);
	}

	int	Account::getNbWithdrawals( void )
	{
		return (_totalNbWithdrawals);
	}


	/*****************************************************************/
	/*                        Printers                               */
	/*****************************************************************/


	void	Account::_displayTimestamp( void )
	{
		std::time_t		time;
		struct std::tm	*datetime;

		time = std::time(0);
		datetime = std::localtime(&time);
		std::cout << '[' << (datetime->tm_year + 1900);
		if (datetime->tm_mon + 1 < 10)
			std::cout << 0;
		std::cout << datetime->tm_mon + 1
			<< datetime->tm_mday << "_"
			<< datetime->tm_hour
			<< datetime->tm_min
			<< datetime->tm_sec << "] ";
	}


	// yes
	void	Account::displayAccountsInfos( void )
	{
		Account::_displayTimestamp();
		print_bloc("accounts", Account::getNbAccounts());
		print_bloc("total", Account::getTotalAmount());
		print_bloc("deposits", Account::getNbDeposits());
		std::cout << "withdrawals:" << CYAN << Account::getNbWithdrawals()
			<< RESET << std::endl;
	}

	// yes
	void	Account::displayStatus( void ) const
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("amount", this->_amount);
		print_bloc("deposits", this->_nbDeposits);
		std::cout << "withdrawals" << ":"
			<< CYAN << this->_nbWithdrawals
			<< RESET << std::endl;
	}

	/*****************************************************************/
	/*                        Actions                                */
	/*****************************************************************/


	// yes
	void	Account::makeDeposit( int deposit )
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("p_amount", this->_amount);
		this->_nbDeposits += 1;
		_totalNbDeposits++;
		_totalAmount += deposit;
		this->_amount += deposit;
		print_bloc("deposit", deposit);
		print_bloc("amount", this->_amount);
		std::cout << "nb_deposits:" << CYAN
		<< this->_nbDeposits << RESET << std::endl;
	}

	// yes
	bool	Account::makeWithdrawal( int withdrawal )
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("p_amount", this->_amount);
		if (this->_amount < withdrawal)
		{
			std::cout << "withdrawal:refused" << std::endl;
			return (false);
		}
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		print_bloc("withdrawal", withdrawal);
		print_bloc("amount", this->_amount);
		std::cout << "nb_withdrawals:" << CYAN
		<< this->_nbWithdrawals << RESET << std::endl;
		return (true);
	}

	int		Account::checkAmount( void ) const
	{
		return (this->_amount);
	}
