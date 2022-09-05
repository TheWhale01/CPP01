#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon {
	public:
		Weapon( std::string type );
		~Weapon( void );

		std::string	getType(void) const;
		void		setType(std::string new_type);

	private:
		std::string _type;
};

#endif