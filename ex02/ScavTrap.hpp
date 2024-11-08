#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);

		virtual ~ScavTrap();

		ScavTrap &operator=(const ScavTrap &copy);

		void attack(std::string const & target);
		void guardGate();
	
	private:
		bool _guard_gate;
}; 

#endif