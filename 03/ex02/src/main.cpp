#include <ScavTrap.hpp>
#include <FragTrap.hpp>

void	test_energy_consumption_beRepaired(ClapTrap &obj)
{
	std::cout << "current energy: " << obj.getEnergy() << std::endl;
	for (int i = 0; i < 11; i++)
		obj.beRepaired(i);
	std::cout << "Energy: " << obj.getEnergy() << std::endl;
}

void	test_takeDamage(ClapTrap &obj)
{
	std::cout << "current hits points: " << obj.getHits() << std::endl;
	for (int i = 0; i < 11; i++)
		obj.takeDamage(i);
	std::cout << "current hits points: " << obj.getHits() << std::endl;
}

void	test_energy_consumption_beRepaired_scav(ScavTrap &obj)
{
	std::cout << "current energy: " << obj.getEnergy() << std::endl;
	for (int i = 0; i < 11; i++)
		obj.beRepaired(i);
	std::cout << "Energy: " << obj.getEnergy() << std::endl;
}

void	test_takeDamage_scav(ScavTrap &obj)
{
	std::cout << "current hits points: " << obj.getHits() << std::endl;
	for (int i = 0; i < 19; i++)
		obj.takeDamage(i);
	std::cout << "current hits points: " << obj.getHits() << std::endl;
}

void	test_init_constructor(ClapTrap &clap, ScavTrap &Scav, FragTrap &Frag)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Test init" << std::endl;
	std::cout << clap << std::endl;
	std::cout << Scav << std::endl;
	std::cout << Frag << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

void	combat_knife(ClapTrap &clap, ScavTrap &scav, FragTrap &frag)
{
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Combat_knife" << std::endl;
	clap.setAttack(50);
	
	clap.attack(scav.getName());
	clap.takeDamage(clap.getAttack());
	std::cout << "current hits points: " << scav.getName() << " " << scav.getHits() << std::endl;
	scav.attack(clap.getName());
	clap.takeDamage(scav.getAttack());
	std::cout << "current hits points: " << clap.getName() << " " << clap.getHits() << std::endl;
	frag.takeDamage(frag.getAttack());
	frag.takeDamage(frag.getAttack());
	frag.takeDamage(frag.getAttack());
	frag.takeDamage(frag.getAttack());
	std::cout << "current hits points: " << frag.getName() << " " << frag.getHits() << std::endl;
	std::cout << "----------------------------------" << std::endl;
}

int	main(void)
{
	ClapTrap	foo("eralonso");
	ScavTrap	fooo("frankgar");
	FragTrap	ffoo("dacortes");

	test_init_constructor(foo, fooo, ffoo);
	combat_knife(foo, fooo, ffoo);
	return (EXIT_SUCCESS);
}