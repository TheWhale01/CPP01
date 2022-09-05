#ifndef __HARL_HPP__
# define __HARL_HPP__

#include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );

		void	complain(std::string level) const;

	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
};

#endif