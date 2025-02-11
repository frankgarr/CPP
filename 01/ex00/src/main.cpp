/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:16:40 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:09:10 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

int	main(void)
{
	try
	{
		Zombie *juan = newZombie(NULL);
		juan->announce();
		delete juan;
	}
	catch (...)
	{
		std::cerr << "Error: NULL param" << std::endl;
	}
	try
	{
		randomChump("Pepe Balderrama");
	}
	catch (...)
	{
		std::cerr << "Error: NULL param" << std::endl;
	}
	try
	{
		Zombie *danny = newZombie("Dannyel");
		danny->announce();
		delete danny;
	}
	catch (...)
	{
		std::cerr << "Error: NULL param" << std::endl;
	}
	std::cout << "OH NOOO!!! DANNYEL CALLED SOME FRIENDS 😰 THERE COMES THE FILLER ZOMBIES 🧟" << std::endl;
	for (int i = 1; i < 6; i++)
	{
		std::cout << "🧟Filler Zombie " << i;
		try
		{
			randomChump("");
		}
		catch (...)
		{
			std::cerr << "Error: NULL param" << std::endl;
		}
	}
	std::cout << "OOOFFFFFF, Luckily they've left 😓" << std::endl;
}
