/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:02:28 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 14:54:29 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int	main(void)
{
	Phonebook	test;
	std::string	lign;

	while (std::getline(std::cin, lign))
	{
		if (lign == "ADD")
			test.assign();
		if (lign == "SEARCH")
			test.print();
		if (lign == "EXIT")
			return (0);
	}
	std::cerr << "End of file or error while reading cin" << std::endl;
	return (1);
}
