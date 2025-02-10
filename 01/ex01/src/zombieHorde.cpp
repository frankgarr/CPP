/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:22:07 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/10 12:35:19 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cerr << "Error: Invalid parámeter for the quantity of the zombieHorde\n" << std::endl;
		return (NULL);
	}
	Zombie	*zombies = new (std::nothrow) Zombie[N];
	if (!zombies)
	{
		std::cerr << "Error: Couldn't assign that much Zombies\n" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}
