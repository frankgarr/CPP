/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:30:08 by frankgar          #+#    #+#             */
/*   Updated: 2025/01/27 10:25:11 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		for (int i = 1; i < argc; i++)
		{
			if (argv[i])
			{
				std::string str = argv[i];
				for (size_t j = 0; str[j]; j++)
					str[j] = toupper(str[j]);
				std::cout << str;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
