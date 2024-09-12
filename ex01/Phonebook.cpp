/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:24:42 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 15:55:27 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "\e[0;32mPhonebook default constructor called\e[0m" << std::endl;
	this->last_index = 0;
}

int	Phonebook::assign(void)
{
	Contacts	tmp;
	std::cout << "New contact:" << std::endl;
	if (tmp.assign())
		return (1);
	this->list[this->last_index] = tmp;
	if (this->last_index == 7)
		this->last_index = 0;
	else
		(this->last_index)++;
	return (0);
}
void	Phonebook::print(void)
{
	int			i;

	i = 0;
	while (i < 8)
	{
		this->list[i].print();
		i++;
	}
	if (this->list[0].empty())
		std::cout << "Phonebook is empty.." << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "\e[0;31mPhonebook destructor called\e[0m" << std::endl;
}
