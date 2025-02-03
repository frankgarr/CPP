/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:51:10 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/02 20:52:38 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Contact
{
	public:
		Contact(void);
		bool	set_contact(std::string first_name, std::string last_name, 
				std::string nickname, std::string phone, std::string dark_secret);
		~Contact(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	dark_secret;
};
