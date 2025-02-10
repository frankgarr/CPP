/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:17:26 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 00:37:36 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

# include <string>
# include <iostream>

Zombie::Zombie(const std::string &name) : name(name)
{}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{}
