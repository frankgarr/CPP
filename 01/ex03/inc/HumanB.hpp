/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:25:39 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:18:15 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <Weapon.hpp>
# include <iostream>

class	HumanB
{
	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
		~HumanB(void);
	private:
		std::string	_name;
		Weapon		*_weapon;
};
