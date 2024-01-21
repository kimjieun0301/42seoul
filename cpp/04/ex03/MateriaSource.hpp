#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*slot[4];
		int			idx;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &ref);
		MateriaSource& operator=(const MateriaSource &ref);
		~MateriaSource();

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};

#endif
