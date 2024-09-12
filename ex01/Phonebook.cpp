/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:24:42 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 14:48:00 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook default constructor called\n" << std::endl;
	this->last_index = 0;
	// this->_infos ;
}

// int	Phonebook::get_index(void)
// {
// 	for (int i = 0; i < 8; i++)
// 	{
// 		if (this->list[i].empty())
// 			return (i);
// 		i++;
// 	}
// 	// otherwise return oldest;
// }

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
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called\n" << std::endl;
	// for (int i = 0; i < 8; i++)
	// 	this->list[i].~Contacts();
}
