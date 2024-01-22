#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
	name = "defult";
	idx = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	idx = 0;
}

Character::Character(const Character &ref)
{
	for (int i = 0; i < idx; i++)
		delete slot[i];
	name = ref.getName();
	idx = ref.idx;
	for (int i = 0; i < idx; i++)
		slot[i] = ref.slot[i]->clone();
}

Character& Character::operator=(const Character &ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < idx; i++)
			delete slot[i];
		name = ref.getName();
		idx = ref.idx;
		for (int i = 0; i < idx; i++)
			slot[i] = ref.slot[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < idx; i++)
		delete slot[i];
}

AMateria* Character::getMateria(int idx) const
{
	if (this->idx == 0 || this->idx <= idx)
		return 0;
	else
		return slot[idx]; 
}


std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (idx == 4)
		delete m;
	else if (this->slot[idx] == NULL && m != NULL)
	{
		slot[idx] = m;
		idx++;
	}
}

void Character::unequip(int idx)
{
	if (this->idx > 0 && this->idx > idx && slot[idx] != NULL)
	{
		for (int i = idx; i < this->idx; i++)
			slot[i] = slot[i + 1];
		slot[this->idx - 1] = NULL;
		this->idx--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->idx > 0 && this->idx > idx && slot[idx] != NULL)
		slot[idx]->use(target);
}
