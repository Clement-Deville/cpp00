/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:30:16 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/11 20:07:52 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{
	Contacts::infos;
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
		msg = "Enter your phone number name:";
	if (i == 4)
		msg = "Enter your darkest secret name:";
	if (!msg.empty())
		std::cout << msg << std::endl;
}

Contacts::Contacts(std::ios cin)
{
	int			i;
	std::string	str[5];

	i = 0;
	while (i < 5)
	{
		print_prompt_msg(i);
		if (!(std::cin >> str[i]))
		{
			std::cout << "Error while reading cin stream" << std::endl;
			return ;
		}
		if (str[i].empty())
		{
			std::cout << "A field can't be empty, attribution has failed."
				<< std::endl;
			return ;
		}
		i++;
	}
	i = 0;
	while (i < 5)
		Contacts::infos[i] = str[i++];
}

Contacts::~Contacts()
{
}
