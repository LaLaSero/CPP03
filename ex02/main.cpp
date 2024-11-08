#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	FragTrap a;
	FragTrap b("named");


	a.attack("named");
	a.takeDamage(5);
	a.beRepaired(3);
	a.highFivesGuys();
	b.takeDamage(3);
	b.highFivesGuys();

	std::cout << std::endl;

	std::cout << " name: "  << a.getName() << std::endl;
	std::cout << " hit points: "  << a.getHitPoints() << std::endl;
	std::cout << " energy points: "  << a.getEnergyPoints() << std::endl;
	std::cout << " attack damage: "  << a.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << " name: "  << b.getName() << std::endl;
	std::cout << " hit points: "  << b.getHitPoints() << std::endl;
	std::cout << " energy points: "  << b.getEnergyPoints() << std::endl;
	std::cout << " attack damage: "  << b.getAttackDamage() << std::endl;

	return 0;
}