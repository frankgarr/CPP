/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:14:12 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/09 01:26:39 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <Zombie.hpp>
# include <string>
# include <iostream>

Zombie* zombieHorde( int N, std::string name);
Zombie	*newZombie(std::string name);
