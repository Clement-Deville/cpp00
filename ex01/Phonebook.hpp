/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:01:43 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 14:04:23 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contacts.hpp"

class Phonebook
{
private:
	Contacts	list[8];
	int			last_index;
public:
	Phonebook();
	~Phonebook();
	int		assign(void);
	void	print(void);
	// int		get_index(void);
};

#endif
