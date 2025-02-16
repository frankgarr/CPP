#include <FragTrap.hpp>


FragTrap::FragTrap (void): ClapTrap()
{
	std::cout << "FragTrap: " << "Default constructor called" << std::endl;
	this->setName("");
	this->setHits(100);
	this->setEnergy(100);
	this->setAttack(30);
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap()
{
	*this = obj;
	std::cout << "FragTrap: " << obj.getName() << " Copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	this->setName(obj.getName());
	this->setHits(obj.getHits());
	this->setEnergy(obj.getEnergy());
	this->setAttack(obj.getAttack());
	std::cout << "FragTrap: " << obj.getName() << ": All parameters constructor" << std::endl;
	return (*this);
}

FragTrap::FragTrap (std::string name): ClapTrap()
{
	std::cout << "FragTrap: " << "Constructor called" << std::endl;
	this->setName(name);
	this->setHits(100);
	this->setEnergy(100);
	this->setAttack(30);
}




void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: " << this->getName() << ": Hey guys, High five" << std::endl;	
}

FragTrap::~FragTrap (void)
{
	std::cout << "FragTrap: " << this->getName() << " Destructor called" << std::endl;
}



std::ostream &operator<<(std::ostream &os, const FragTrap &obj)
{
	os << "Name: " << obj.getName() << " Hit ponits: " << obj.getHits() << " Energy points: " << obj.getEnergy() << " Attack damage: " << obj.getAttack();
	return (os);
}