/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 11:56:36 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/02 19:40:03 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <Contact.hpp>

# include <string>
# include <iostream>

# define CLEAR_SCREEN "\x1b[1J \x1b[H"
# define FAILURE 1
# define SUCCESS 0

enum	options
{
	NONE = 0,
	ADD,
	SEARCH,
	EXIT
};

class PhoneBook
{
	public:
		PhoneBook(void);
		void	add_contact(std::string first_name, std::string last_name, 
				std::string nickname, std::string phone, std::string dark_secret);
		void	search_contact(int num, int option);
		~PhoneBook(void);
	private:
		Contact contacts[8];
		int		last_mod;
};
