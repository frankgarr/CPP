/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:45:47 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/05 13:17:36 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void	PhoneBook::PhoneBook(void)
{
	this->last_mod = 0;
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone, std::string dark_secret)
{
	int	last_modification = this->last_mod;

	if (last_modification > 7)
		last_modification -= 8;
	this->contact[last_modification].set_contact(first_name, last_name, nickname, phone, dark_secret);
	this->last_mod++;
	if (this->last_mod == 16)
		this->last_mod = 8;
}

int	can_be_searched(int index)
{
	if (index <= this->last_modification)
		return (SUCCES);
	return (FAILURE);
}

std::string	search_contact(int num, int option)
{
	return (this->contact[num].get_content(option));
}
