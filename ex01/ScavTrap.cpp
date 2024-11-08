#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guard_gate = false;
	std::cout << "ScavTrap default constructor for name: " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_guard_gate = false;
	_name = name;
	std::cout << "ScavTrap name constructor for name: " << _name << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	_guard_gate = copy._guard_gate;
	std::cout << "ScavTrap copy constructor for name:"<< _name <<" called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	_guard_gate = copy._guard_gate;
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor for name: "<< _name << " called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	else
		std::cout << "ScavTrap " << _name << " is out of energy points!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_guard_gate == false)
	{
		std::cout << "ScavTrap " << _name << " start to guard the Gate." << std::endl;
		_guard_gate = true;
	}
	else
	{
		std::cout << "ScavTrap " << _name << "is already guarding the Gate." << std::endl;
	}
}


