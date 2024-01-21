#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	idx = 0;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
	for (int i = 0; i < idx; i++)
		delete slot[i];
	idx = ref.idx;
	for (int i = 0; i < idx; i++)
		slot[i] = ref.slot[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < idx; i++)
			delete slot[i];
		idx = ref.idx;
		for (int i = 0; i < idx; i++)
			slot[i] = ref.slot[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < idx; i++)
		delete slot[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (idx == 4)
		delete m;
	else
	{
		slot[idx] = m;
		idx++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (this->idx > 0)
	{
		for (int i = 0; i < idx; i++)
		{
			if (slot[i] != NULL && slot[i]->getType() == type)
				return (slot[i]->clone());
		}
	}
	return 0;
}
