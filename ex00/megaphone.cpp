/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:07:04 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/11 18:32:33 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_caps(std::string arg)
{
	int	i;

	i = 0;
	while (arg[i])
		std::cout << (char)std::toupper(arg[i++]);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
		print_caps(argv[i++]);
	std::cout << std::endl;
	return (0);
}
