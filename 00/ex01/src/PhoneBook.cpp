/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:45:47 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/04 12:38:13 by frankgar         ###   ########.fr       */
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
	this->contact[this->last_mod].set_contact(first_name, last_name, nickname, phone, dark_secret);
	this->last_mod++;
	if (this->last_mod == 8)
		this->last_mod = 0;
}

std::string	search_contact(int num, int option)
{
	return (this->contact[num].get_content(option));
}
