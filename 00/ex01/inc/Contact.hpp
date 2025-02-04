/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:51:10 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/04 11:51:42 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

enum content
{
	FISRT_NAME = 0,
	LAST_NAME,
	NICKNAME,
	PHONE,
	DARK_SECRET
};

class Contact
{
	public:
		Contact(void);
		void	set_contact(std::string first_name, std::string last_name, 
				std::string nickname, std::string phone, std::string dark_secret);
		std::string	get_content(int option);
		~Contact(void);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	dark_secret;
};
