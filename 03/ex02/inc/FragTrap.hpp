#pragma once 

#include <ClapTrap.hpp>

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &obj);
		~FragTrap(void);
        
		void	highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &os, const FragTrap &obj);