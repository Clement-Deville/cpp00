/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:02:28 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/07 16:15:59 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	test;
	std::string	lign;

	std::cout << "\e[0;33mPrompt: \e[0m" << std::endl;
	while (std::getline(std::cin, lign))
	{
		if (lign == "ADD")
			test.assign();
		else if (lign == "SEARCH")
			test.print();
		else if (lign == "EXIT")
			return (0);
		else
			std::cerr << "Invalid command" << std::endl;
		std::cout << "\e[0;33mPrompt: \e[0m" << std::endl;
	}
	std::cerr << "End of file or error while reading cin" << std::endl;
	return (1);
}
