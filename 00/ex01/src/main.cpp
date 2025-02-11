/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:33:28 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 10:10:18 by frankgar         ###   ########.fr       */
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
			break;
		}
		case ADD:
		{
			std::cout << "------------------------------ADD CONTACT-----------------------------" << std::endl;
			std::cout << "        [ TO ADD THE NEW CONTACT, YOU MUST FILL ALL THE BLANKS ]" << std::endl;
			std::cout << "----------------------------------------------------------------------" << std::endl;
			std::cout << "\n" << std::endl;
			break;
		}
		case SEARCH:
		{
			std::cout << "----------------------------SEARCH CONTACT----------------------------" << std::endl;
			std::cout << "            [ SELECT THE CONTACT THAT YOU WANT TO SEARCH ]" << std::endl;
			std::cout << "                             [ 0 = EXIT ]" << std::endl;
			std::cout << "----------------------------------------------------------------------" << std::endl;
			std::cout << "        |   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
			std::cout << "        |----------|----------|----------|----------|" << std::endl;
			break;
		}
	}
}

std::string	get_input(std::string target, int mode)
{
	std::string	input;
	int			correct_num = true;
	do
	{
		std::cout << target;
		std::getline(std::cin, input);
		if (!input.c_str() || std::cin.eof())
			return ("");
		if (input[0] == '\n')
			std::cout << "        Error: File must be filled" << std::endl;
		correct_num = true;
		if (mode == PHONE_NUMBER)
		{
			for (int i = 0; input[i] && input[i] != '\n' && correct_num == true; i++)
				{
					if (!isdigit(input[i]))
					{
						std::cout << "        Error: Phone Number must be filled with numbers" << std::endl;
						correct_num = false;
					}
				}
		}
	} while (!input[0] || correct_num == false);
	return (input);
}

std::string	expand_special_characters(const std::string &input)
{
	std::string expanded;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == '\t')
		    expanded += "    ";
		else
		    expanded += input[i];
	}
	return (expanded);
}

int	menu_add_contact(PhoneBook &phone)
{
	std::string first_name, last_name, nickname, phone_number, dark_secret;
	
	show_menu(ADD);
	first_name = get_input("                          Name: ", STRING);
	if (!first_name.c_str())
		return(FAILURE);
	last_name = get_input("                     Last Name: ", STRING);
	if (!last_name.c_str())
		return(FAILURE);
	nickname = get_input("                      Nickname: ", STRING);
	if (!nickname.c_str())
		return(FAILURE);
	phone_number = get_input("                  Phone Number: ", PHONE_NUMBER);
	if (!phone_number.c_str())
		return(FAILURE);
	dark_secret = get_input("                Darkest Secret: ", STRING);
	if (!dark_secret.c_str())
		return(FAILURE);
	first_name = expand_special_characters(first_name);
	last_name = expand_special_characters(last_name);
	nickname = expand_special_characters(nickname);
	phone_number = expand_special_characters(phone_number);
	dark_secret = expand_special_characters(dark_secret);
	phone.add_contact(first_name, last_name, nickname, phone_number, dark_secret);
	return (SUCCESS);
}

std::string get_menu_content(int num, int option, PhoneBook &phone)
{
	std::string content = phone.search_contact(num, option);

	if (content.size() > 10)
		return (content.substr(0, 9) + '.');
	if (content.size() < 10)
		return (std::string(10 - content.size(), ' ') + content);
	else
		return (content);
}

int	menu_search_contact(PhoneBook &phone)
{
	std::string	input;
	bool 		is_num;
	int			index;

	show_menu(SEARCH);
	for (int i = 0; i <= 7; i++)
	{
		std::cout << "        |         " << i + 1 << "|";
		std::cout << get_menu_content(i, FIRST_NAME, phone) << "|";
		std::cout << get_menu_content(i, LAST_NAME, phone) << "|";
		std::cout << get_menu_content(i, NICKNAME, phone) << "|" << std::endl;
	}
	std::cout << "        |----------|----------|----------|----------|\n" << std::endl;
	do
	{

		std::cout << "                               ";
		std::getline(std::cin, input);
		if (!input.c_str() || std::cin.eof())
			return (EXIT);
		is_num = true;
    	for (int i = 0; input[i] && is_num == true; i++)
		{
        	if (!isdigit(input[i]))
            	is_num = false;
		}
		if (is_num) 
		{
			index = std::atoi(input.c_str());
			if (input.size() > 1)
			{
				std::cout << "                        Error: number too big" << std::endl;
				is_num = false;
			}
			else if (index == 0)
				;
			else if (phone.can_be_searched(index - 1) == SUCCESS)
			{
				std::cout << "       First Name: " << phone.search_contact(index - 1, FIRST_NAME) << std::endl;
				std::cout << "        Last Name: " << phone.search_contact(index - 1, LAST_NAME) << std::endl;
				std::cout << "         Nickname: " << phone.search_contact(index - 1, NICKNAME) << std::endl;
				std::cout << "     Phone Number: " << phone.search_contact(index - 1, PHONE) << std::endl;
				std::cout << "   Darkest Secret: " << phone.search_contact(index - 1, DARK_SECRET) << std::endl;
				std::cout << "   Press Enter to Continue:";
				std::getline(std::cin, input);
			}
			else
			{
				if (input.size())
					std::cout << "                        Contact not found" << std::endl;
				is_num = false;
			}
		}
		else
			std::cout << "                     Please, insert a number" << std::endl;
	} while(is_num == false);
	return (SUCCESS);
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
				if (menu_search_contact(phone) == FAILURE)
					option = EXIT;
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
