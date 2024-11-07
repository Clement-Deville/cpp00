/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:30:16 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/07 16:09:27 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
	std::cout << "\e[0;32mContact default constructor called\e[0m" << std::endl;
}

void	print_prompt_msg(int i)
{
	std::string msg;
	if (i == 0)
		msg = "Enter your first name:";
	if (i == 1)
		msg = "Enter your last name:";
	if (i == 2)
		msg = "Enter your nickname name:";
	if (i == 3)
		msg = "Enter your phone number:";
	if (i == 4)
		msg = "Enter your darkest secret name:";
	if (!msg.empty())
		std::cout << msg << std::endl;
}

int	Contacts::assign(void)
{
	int			i;
	std::string	str[5];

	i = 0;
	while (i < 5)
	{
		print_prompt_msg(i);
		if (!(std::getline(std::cin, str[i])))
		{
			std::cout << "Error while reading cin stream" << std::endl;
			return (1);
		}
		if (str[i].empty())
		{
			std::cout << "A field can't be empty, attribution has failed."
				<< std::endl;
			return (1);
		}
		i++;
	}
	for (int i = 0; i < 5; i++)
		this->_infos[i] = str[i];
	return (0);
}

void	print_column(int i, std::string str)
{
	int	count;

	count = 0;
	if (i == -1)
	{
		std::cout << "         |";
		return ;
	}
	while (str[count] && count < 9)
		std::cout << str[count++];
	if (count == 9)
	{
		std::cout << '.';
		count++;
	}
	while (count < 10)
	{
		std::cout << ' ';
		count++;
	}
	if (i != 2)
		std::cout << '|';
}

void	Contacts::print(void)
{
	int			i;

	i = 0;
	if (this->empty())
		return ;
	print_column(-1, "");
	while (i < 3)
	{
		print_column(i, this->_infos[i]);
		i++;
	}
	std::cout << std::endl;
}

bool	Contacts::empty(void)
{
	if (this->_infos[0].empty())
		return (true);
	return (false);
}

Contacts::~Contacts()
{
	int	i;

	i = 0;
	std::cout << "\e[0;31mContact destructor called\e[0m" << std::endl;
	while (i < 5)
	{
		this->_infos[i] = "";
		i++;
	}
}
