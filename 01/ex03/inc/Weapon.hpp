/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:25:07 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 11:55:05 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class	Weapon
{
	public:
		Weapon(const std::string &type);
		const std::string	getType(void) const;
		void				setType(const std::string &type);
		~Weapon(void);
	private:
		std::string	_type;
};
