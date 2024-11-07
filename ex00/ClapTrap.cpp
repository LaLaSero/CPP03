#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points > 0)
	{
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}

std::string ClapTrap::getName() const {
	return _name;
}

std::string ClapTrap::getHitPoints() const {
	return std::to_string(_hit_points);
}

std::string ClapTrap::getEnergyPoints() const {
	return std::to_string(_energy_points);
}

std::string ClapTrap::getAttackDamage() const {
	return std::to_string(_attack_damage);
}