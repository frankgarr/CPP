/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:33:14 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 00:34:39 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

void	randomChump(std::string name)
{
	Zombie	new_zombie(name);
	new_zombie.announce();
}
