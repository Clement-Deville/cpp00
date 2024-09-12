/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:03:30 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 20:39:15 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "string"
#include "iostream"
#include "ctime"

	/*****************************************************************/
	/*                        Helpers                                */
	/*****************************************************************/

	void	print_bloc(std::string str, int nb)
	{
		std::cout << str << ":" << nb << ";";
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
		Account::_nbAccounts += 1;
	}
	Account::~Account( void )
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("amount", this->_amount);
		std::cout << "closed" << std::endl;
		Account::_nbAccounts -= 1;
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
		return (Account::_nbAccounts);
	}

	int	Account::getTotalAmount( void )
	{
		return (Account::_totalAmount);
	}

	int	Account::getNbDeposits( void )
	{
		return (Account::_totalNbDeposits);
	}

	int	Account::getNbWithdrawals( void )
	{
		return (Account::_totalNbWithdrawals);
	}


	/*****************************************************************/
	/*                        Printers                               */
	/*****************************************************************/


	void	Account::_displayTimestamp( void )
	{
		time_t timestamp;
		time(&timestamp);
		std::cout << ctime(&timestamp) << " ";
	}


	// yes
	void	Account::displayAccountsInfos( void )
	{
		Account::_displayTimestamp();
		std::cout << "accounts:" << Account::getNbAccounts() << ";";
		std::cout << "total:" << Account::getTotalAmount() << ";";
		std::cout << "deposits:" << Account::getNbDeposits() << ";";
		std::cout << "withdrawals:" << Account::getNbAccounts()
			<< std::endl;
	}

	// yes
	void	Account::displayStatus( void ) const
	{
		Account::_displayTimestamp();
		print_bloc("index", this->_accountIndex);
		print_bloc("amount", this->_amount);
		print_bloc("deposits", this->_nbDeposits);
		print_bloc("deposits", this->_nbWithdrawals);
		std::cout << "deposits" << ":"
			<< this->_nbWithdrawals << std::endl;
	}

	/*****************************************************************/
	/*                        Actions                                */
	/*****************************************************************/


	// yes
	void	Account::makeDeposit( int deposit )
	{

	}

	// yes
	bool	Account::makeWithdrawal( int withdrawal )
	{
		return (false);
	}

	int		Account::checkAmount( void ) const
	{
		return (0);
	}
