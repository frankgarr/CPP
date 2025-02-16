
#include <ClapTrap.hpp>

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->name = "";
	this->hits_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hits_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout <<"ClapTrap " << obj.getName() << ": Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->name = obj.getName();
	this->hits_points = obj.getHits();
	this->energy_points = obj.getEnergy();
	this->attack_damage = obj.getAttack();
	std::cout << "Claptrap " << obj.getName() << ": All parameters constructor" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Calptrap "<< this->name << " Destructor called" << std::endl;
}




void	ClapTrap::setName(std::string _name)
{
	this->name = _name;
}

void	ClapTrap::setHits(unsigned int _hits)
{
	this->hits_points = _hits;
}

void	ClapTrap::setEnergy(unsigned int _energy)
{
	this->energy_points = _energy;
}

void	ClapTrap::setAttack(unsigned int _attack)
{
	this->attack_damage = _attack;
}




std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int	ClapTrap::getHits(void) const
{
	return (this->hits_points);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->energy_points);
}

unsigned int	ClapTrap::getAttack(void) const
{
	return (this->attack_damage);
}




void	ClapTrap::attack(const std::string &target)
{
	if (this->getEnergy() < 1)
	{
		std::cout << this->getName() << ": Can't do more damage: " << "energy points 0" << std::endl;
		return ;
	}
	if (this->getHits() < 1)
	{
		std::cout << this->getName() << ": is dead :C" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Hits points: " << this->getHits() << std::endl;
	if (amount >= this->getHits())
		this->setHits(0);
	if ((this->getHits() < 1))
	{
		std::cout << this->getName() << ": is dead :C" << std::endl;
		return ;
	}
	std::cout  << "Take damages :" << amount << " " << this->getName() << ": I'm dying!!!!!" << std::endl;
	this->setHits(this->getHits() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergy() < 1)
	{
		std::cout << this->getName() << ": Cannot repair hit points: "  << "energy points 0" << std::endl;
		return ;
	}
	else if ((this->getHits() < 1))
	{
		std::cout << this->getName() << ": is dead :C" << std::endl;
		return ;
	}
    else if (this->getHits() == 10)
    {
        std::cout << this->getName() << ": Cannot repair hit points: "  << "Already at max Hit Points" << std::endl;
        return ;
    }
	this->setEnergy(this->getEnergy() - 1);
	this->setHits(this->getHits() + amount);
	std::cout << "Current hit points: " << this->getHits() << std::endl;
}




std::ostream	&operator<<(std::ostream &os, const ClapTrap &obj)
{
	os << "Name: " << obj.getName() << " Hit ponits: " << obj.getHits() << " Energy points: " << obj.getEnergy() << " Attack damage: " << obj.getAttack();
	return (os);
}