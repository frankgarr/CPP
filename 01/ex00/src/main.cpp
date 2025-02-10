/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:16:40 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 01:09:14 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

int	main(void)
{
	Zombie *juan = newZombie("Juan");
	juan->announce();
	delete juan;
	randomChump("Pepe Balderrama");
	Zombie *danny = newZombie("Dannyel");
	danny->announce();
	std::cout << "OH NOOO!!! DANNYEL CALLED SOME FRIENDS 😰 THERE COMES THE FILLER ZOMBIES 🧟" << std::endl;
	for (int i = 1; i < 6; i++)
	{
		std::cout << "🧟Filler Zombie " << i; 
		randomChump("");
	}
	std::cout << "OOOFFFFFF, Luckily they've left 😓" << std::endl;
	delete danny;
}
