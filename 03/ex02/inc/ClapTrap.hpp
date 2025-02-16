#pragma once 

#include <string>
#include <iostream>
#include <cstdlib>

class	ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        ~ClapTrap(void);

        void	setName(std::string _name);
        void	setHits(unsigned int _hits);
        void	setEnergy(unsigned int _energy);
        void	setAttack(unsigned int _attack);

        std::string		getName(void) const;
        unsigned int	getHits(void) const;
        unsigned int	getEnergy(void) const;
        unsigned int	getAttack(void) const;

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

	protected:
		std::string		name;
		unsigned int	hits_points;
		unsigned int	energy_points;
		unsigned int	attack_damage;
};

std::ostream &operator<<(std::ostream &os, const ClapTrap &obj);