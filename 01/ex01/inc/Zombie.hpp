/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:11:16 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/10 10:41:14 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	public:
		Zombie(void);
		Zombie(const std::string &name);
		void	announce(void);
		void	setName(const std::string &name);
		~Zombie(void);
	private:
		std::string	name;
};
