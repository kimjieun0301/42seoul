#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*slot[4];
		int			idx;
	public:
		Character();
		Character(std::string name);
		Character(const Character &ref);
		Character& operator=(const Character &ref);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getMateria(int idx) const;
};

#endif
