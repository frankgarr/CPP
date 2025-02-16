#include <ClapTrap.hpp>

void	test_energy_consumption_beRepaired(ClapTrap &obj)
{
	std::cout << "current energy: " << obj.getEnergy() << std::endl;
	while (obj.getHits() != 10 && obj.getEnergy())
		obj.beRepaired(1);
	std::cout << "Energy: " << obj.getEnergy() << std::endl;
}

void	test_energy_consumption_kill(ClapTrap &attacker, ClapTrap &victim)
{
	std::cout << "Attacker's current energy: " << attacker.getEnergy() << std::endl;
	while (victim.getHits() > 0 && attacker.getEnergy())
    {
		attacker.attack(victim.getName());
        victim.takeDamage(attacker.getAttack());
    }
	std::cout << "Attackers's Energy: " << attacker.getEnergy() << std::endl;    
	std::cout << "Victim's Live: " << victim.getHits() << std::endl;
}

void	test_die(ClapTrap &obj)
{
	std::cout << "current hits points: " << obj.getHits() << std::endl;
	while (obj.getHits() > 0)
        obj.takeDamage(1);
	std::cout << "current hits points: " << obj.getHits() << std::endl;
}

int	main(void)
{
	ClapTrap	paco("Paco");
    ClapTrap	juan("Juan");

    std::cout << "\e[0;33m" << "Juan has some beef with Paco D:" << "\e[0m" << std::endl;
    juan.attack(paco.getName());
    paco.takeDamage(juan.getAttack());
    std::cout << "\e[0;33m" << "Paco won't take that disrespect :O" << "\e[0m" << std::endl;
    test_energy_consumption_kill(paco, juan);
    std::cout << "\e[0;33m" << "Paco will try to heal himself :D" << "\e[0m" << std::endl;
    test_energy_consumption_beRepaired(paco);
    std::cout << "\e[0;33m" << "Paco got sick ;-;, he won't make it" << "\e[0m" << std::endl;
    test_die(paco);
	return (EXIT_SUCCESS);
}