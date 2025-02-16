#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: " << "Default constructor called" << std::endl;
	this->setName("");
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << "ScavTrap: " << "Constructor called" << std::endl;
	this->setName(name);
	this->hits_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap()
{
	*this = obj;
	std::cout << "ScavTrap:" << obj.getName() << " Copy constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->setName(obj.getName());
	this->setHits(obj.getHits());
	this->setEnergy(obj.getEnergy());
	this->setAttack(obj.getAttack());
	std::cout << "ScavTrap " << obj.getName() << ": All parameters constructor" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << this->getName() << " Destructor called" << std::endl;
}




void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << "Is now in GateKeeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << this->getName() << " attacks "
		<< target << ", causing " << this->getAttack() << " points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
}



std::ostream &operator<<(std::ostream &os, const ScavTrap &obj)
{
	os << "Name: " << obj.getName() << " Hit ponits: " << obj.getHits() << " Energy points: " << obj.getEnergy() << " Attack damage: " << obj.getAttack();
	return (os);
}