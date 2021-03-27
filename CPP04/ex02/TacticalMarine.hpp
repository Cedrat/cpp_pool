#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine : virtual public ISpaceMarine
{
	public : 
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine();

		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

};

#endif
