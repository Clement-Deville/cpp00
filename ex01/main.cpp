/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:02:28 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 15:56:49 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	test;
	std::string	lign;

	std::cout << "Prompt: ";
	while (std::getline(std::cin, lign))
	{
		if (lign == "ADD")
			test.assign();
		if (lign == "SEARCH")
			test.print();
		if (lign == "EXIT")
			return (0);
		if (lign.empty() == false)
			std::cout << "Prompt: ";
	}
	std::cerr << "End of file or error while reading cin" << std::endl;
	return (1);
}
