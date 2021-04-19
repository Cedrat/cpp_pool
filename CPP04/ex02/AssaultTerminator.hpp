#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <string>
#include "ISpaceMarine.hpp"
class AssaultTerminator : virtual public ISpaceMarine

{
	public :
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		virtual ~AssaultTerminator();

		virtual AssaultTerminator* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif
