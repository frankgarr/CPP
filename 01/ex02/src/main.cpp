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

#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;


    std::cout << "Memories addresses of:\n" << std::endl;
	std::cout << "brain = " << &brain << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;
    std::cout << "Values of:\n" << std::endl;
	std::cout << "brain = " << brain << std::endl;
	std::cout << "stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;
	return (EXIT_SUCCESS);
}