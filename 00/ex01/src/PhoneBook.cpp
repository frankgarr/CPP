/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:45:47 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/06 12:20:12 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void)
{
	this->last_mod = 0;
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone, std::string dark_secret)
{
	int	last_modification = this->last_mod;

	if (last_modification > 7)
		last_modification -= 8;
	this->contacts[last_modification].set_contact(first_name, last_name, nickname, phone, dark_secret);
	this->last_mod++;
	if (this->last_mod == 16)
		this->last_mod = 8;
}

int	PhoneBook::can_be_searched(int index)
{
	if (index < this->last_mod)
		return (SUCCESS);
	return (FAILURE);
}

std::string	PhoneBook::search_contact(int num, int option)
{
	return (this->contacts[num].get_content(option));
}

PhoneBook::~PhoneBook(void)
{}
