/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:11:31 by cdeville          #+#    #+#             */
/*   Updated: 2024/09/12 13:59:34 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
# include <iostream>

class Contacts
{
private:
	std::string _infos[5];
public:
	Contacts();
	~Contacts();
	int		assign(void);
	void	print(void);
	bool	empty(void);
};

#endif
