/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:01:43 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/13 14:53:21 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include <iostream>
# include "Contacts.hpp"

class PhoneBook
{
private:
	Contacts	list[8];
	int			last_index;
public:
	PhoneBook();
	~PhoneBook();
	int		assign(void);
	void	print(void);
};

#endif
