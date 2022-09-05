#ifndef __HUMAN_B_HPP__
# define __HUMAN_B_HPP__

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
		void	setType(std::string new_type);

	private:
		std::string const	_name;
		Weapon				*_weapon;
};

#endif