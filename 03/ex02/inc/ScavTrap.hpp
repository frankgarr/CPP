#pragma once

#include <ClapTrap.hpp>

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &obj);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &obj);
		~ScavTrap(void);
		
		void	guardGate();
		void 	attack(const std::string &target);
};

std::ostream	&operator<<(std::ostream &os, const ScavTrap &obj);