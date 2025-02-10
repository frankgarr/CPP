/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:16:40 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/10 12:34:56 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

int	main(void)
{
	int	N1 = 5, N2 = -5, N3 = 2147483647;
	std::cout << "OH NOOO!!! 😰 THERE COMES " << N1 << " FILLER ZOMBIES 🧟" << std::endl;
	try
	{
		Zombie *horde = zombieHorde(N1, "Filler Zombie");
		if (horde)
		{
			for (int i = 0; i < N1; i++)
			{
				horde[i].announce();
			}
			delete[] horde;
			std::cout << "OOOFFFFFF, Luckily they've left 😓\n" << std::endl;
		}
	} 
	catch (...)
	{
		std::cerr << "Error: NULL Parameter\n" << std::endl;
	}
	std::cout << "OH NOOO!!! 😰 THERE COMES " << N2 << " FILLER ZOMBIES 🧟" << std::endl;
	try
	{
		Zombie *horde2 = zombieHorde(N2, "Filler Zombie");
		if (horde2)
		{
			for (int i = 0; i < N2; i++)
			{
				horde2[i].announce();
			}
			delete[] horde2;
			std::cout << "OOOFFFFFF, Luckily they've left 😓\n" << std::endl;
		}
	}
	catch (...)
	{
		std::cerr << "Error: NULL Parameter\n" << std::endl;
	}
	std::cout << "OH NOOO!!! 😰 THERE COMES " << N3 << " FILLER ZOMBIES 🧟" << std::endl;
	try
	{
		Zombie *horde3 = zombieHorde(N3, "Filler Zombie");
		if (horde3)
		{
		for (int i = 0; i < N3; i++)
			{
				horde3[i].announce();
			}
			delete[] horde3;
			std::cout << "OOOFFFFFF, Luckily they've left 😓" << std::endl;
		}
	}
	catch (...)
	{
		std::cerr << "Error: NULL Parameter" << std::endl;
	}
	return (0);
}
