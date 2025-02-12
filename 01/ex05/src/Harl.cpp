/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:29:56 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:55:52 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my"
		<< " 7XL-double-cheese-triple-pickle-specialketchup"
		<< " burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs"
		<< " more money. You didn’t put enough bacon in my burger! If you did,"
		<< " I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon"
		<< "for free. I’ve been coming for years whereas you started"
		<< " working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the"
	   	<< " manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*status[4]) (void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int	option = 0;

	option += (level == "DEBUG") * DEBUG;
	option += (level == "INFO") * INFO;
	option += (level == "WARNING") * WARNING;
	option += (level == "ERROR") * ERROR;

	switch (option)
	{
		case DEBUG:
			(this->*status[0])();
			break;
		case INFO:
			(this->*status[1])();
			break;
		case WARNING:
			(this->*status[2])();
			break;
		case ERROR:
			(this->*status[3])();
			break;
		default:
			break;
	}
}

Harl::~Harl(void)
{}