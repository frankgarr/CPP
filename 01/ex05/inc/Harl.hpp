/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:29:56 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:55:52 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <fstream>
# include <string>
# include <cstdlib>
# include <iostream>

enum options
{
	DEBUG = 1,
	INFO,
	WARNING,
	ERROR
};

class	Harl
{
	public:
		Harl(void);
		void complain(std::string level);
		~Harl(void);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};