/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:47:53 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/02 20:15:20 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

void Contact::Contact(void)
{
	this->first_name = NULL;
	this->last_name = NULL;
	this->nickname = NULL;
	this->phone = NULL;
	this->dark_secret = NULL;	
}

void	Contact::set_contact(std::string first_name, std::string last_name, 
		std::string nickname, std::string phone, std::string dark_secret)
{
	
}
