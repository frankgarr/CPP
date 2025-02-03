/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:33:28 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/02 19:41:46 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

void	show_menu(int option)
{
	std::cout << CLEAR_SCREEN;
	std::cout << "****************************** PHONE BOOK ******************************\n" << std::endl;
	switch (option)
	{
		case NONE:
		{
			std::cout << "--------------------------------OPTIONS-------------------------------" << std::endl;
			std::cout << "                      [ ADD ] [ SEARCH ] [ EXIT ]" << std::endl;
			std::cout << "----------------------------------------------------------------------" << std::endl;
			std::cout << "                          (Write the option)\n" << std::endl;
		}
		case ADD:
		{
			std::cout << "------------------------------ADD CONTACT-----------------------------" << std::endl;
			std::cout << "        [ TO ADD THE NEW CONTACT, YOU MUST FILL ALL THE BLANKS ]" << std::endl;
			std::cout << "----------------------------------------------------------------------" << std::endl;
			std::cout << "\n" << std::endl;
		}
		case SEARCH:
		{
			std::cout << "----------------------------SEARCH CONTACT----------------------------" << std::endl;
			std::cout << "            [ SELECT THE CONTACT THAT YOU WANT TO SEARCH ]" << std::endl;
			std::cout << "----------------------------------------------------------------------" << std::endl;
			std::cout << "        |   INDEX  |FIRST NAME|LAST NAME | NICKNAME |" << std::endl;
			std::cout << "        |----------|----------|----------|----------|" << std::endl;
		}
	}
}

int	menu_add_contact(PhoneBook phone)
{
	std::string first_name, last_name, nickname, phone_number, dark_secret;
	
	show_menu(ADD);
	do
	{
		std::cout << "                          Name: ";
		std::getline(std::cin, first_name);
		if (!first_name.c_str() || std::cin.eof())
			return (FAILURE);
		if (first_name[0] == '\n')
			std::cout << "Error: File must be filled" << std::endl;
	} while (first_name[0] == '\n');

	do
	{
		std::cout << "                     Last Name: ";
		std::getline(std::cin, last_name);
		if (!last_name.c_str() || std::cin.eof())
			return (FAILURE);
		if (last_name[0] == '\n')
			std::cout << "Error: File must be filled" << std::endl;
	} while (last_name[0] == '\n');

	do
	{
		std::cout << "                      Nickname: ";
		std::getline(std::cin, nickname);
		if (!nickname.c_str() || std::cin.eof())
			return (FAILURE);
		if (nickname[0] == '\n')
			std::cout << "Error: File must be filled" << std::endl;
	} while (nickname[0] == '\n');

	do
	{
		std::cout << "                  Phone Number: ";
		std::getline(std::cin, phone_number);
		if (!phone_number.c_str() || std::cin.eof())
			return (FAILURE);
		if (phone_number[0] == '\n')
			std::cout << "Error: File must be filled" << std::endl;
		for (int i = 0; phone_number[i] != '\n'; i++)
		{
			if (phone_number[i] < '0' || phone_number[i] > '9')
			{
				std::cout << "Error: Phone Number must be filled with numbers" << std::endl;
				continue;
			}
		}
	} while (phone_number[0] == '\n');

	do
	{
		std::cout << "               Darkest Secret: ";
		std::getline(std::cin, dark_secret);
		if (!dark_secret.c_str() || std::cin.eof())
			return (FAILURE);
		if (dark_secret[0] == '\n')
			std::cout << "Error: File must be filled" << std::endl;
	} while (dark_secret[0] == '\n');
	phone.add_contact(first_name, last_name, nickname, phone_number, dark_secret);
	return (SUCCESS);
}

int	menu_search_contact(PhoneBook phone)
{
	;
}

int	get_selected_option(void)
{
	std::string	input;

	std::cout << "                               ";
	std::getline(std::cin, input);
	if (!input.c_str() || std::cin.eof())
		return (EXIT);
	if (!input.compare("ADD"))
		return (ADD);
	if (!input.compare("SEARCH"))
		return (SEARCH);
	if (!input.compare("EXIT"))
		return (EXIT);
	return (NONE);
}

int	main(void)
{
	PhoneBook	phone;
	int			option;

	option = NONE;
	while (option != EXIT)
	{
		show_menu(NONE);
		option = get_selected_option();
		switch (option)
		{
			case ADD:
				if (menu_add_contact(phone) == FAILURE)
					option = EXIT;
				break;
			case SEARCH:
				std::cout << "Aun no funciona perro" << std::endl; 
				menu_search_contact(phone);
				break;
			case EXIT:
				break;
			default:
				std::cout << CLEAR_SCREEN << "Command not found" << std::endl;
				break;	
		}
	}				
	std::cout << CLEAR_SCREEN << "Exiting the phonebook (Everything has been erased)" << std::endl;
}
