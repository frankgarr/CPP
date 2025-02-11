/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:25:30 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:18:19 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <Weapon.hpp>
# include <iostream>

class	HumanA
{
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void	attack(void);
		~HumanA(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};
