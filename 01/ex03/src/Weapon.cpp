/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:35:08 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:17:00 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(const std::string &name) : _type(name)
{}

const std::string	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &type)
{
	this->_type = type;
}


Weapon::~Weapon(void)
{}
