/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:11:16 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 00:39:18 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(const std::string &name);
		void	announce(void);
		~Zombie(void);
	private:
		std::string	name;
};
