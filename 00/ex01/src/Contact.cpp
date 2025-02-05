/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:47:53 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/05 13:25:24 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void Contact::Contact(void)
{
	this->first_name.assign(10, ' ');
	this->last_name.assign(10, ' ');
	this->nickname.assign(10, ' ');
	this->phone.assign(10, ' ');
	this->dark_secret.assign(10, ' ');
}

void	Contact::set_contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone, std::string dark_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone = phone;
	this->dark_secret = dark_secret;
}

std::string	get_content(int option)
{
	switch (option)
	{
		case FIRST_NAME:
			return (this->first_name);
		case LAST_NAME:
			return (this->last_name);
		case NICKNAME:
			return (this->nickname);
		case PHONE:
			return (this->phone);
		case DARK_SECRET:
			return (this->dark_secret);
	}
}
