#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_high_fives = false;
	std::cout << "FragTrap default constructor for name: " << _name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	_high_fives = false;
	_name = name;
	std::cout << "FragTrap name constructor for name: " << _name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy), _high_fives(copy._high_fives)
{
	std::cout << "FragTrap copy constructor for name:"<< _name <<" called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	_high_fives = copy._high_fives;
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor for name: "<< _name << " called." << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " is out of energy points!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " high five guys here." << std::endl;
}