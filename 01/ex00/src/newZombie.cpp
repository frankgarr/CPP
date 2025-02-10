/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:28:59 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 00:38:32 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie = new (std::nothrow) Zombie(name);
	return (new_zombie);
}
