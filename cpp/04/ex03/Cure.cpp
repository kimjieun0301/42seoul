#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	type = "cure";	
}

Cure::Cure(const Cure &ref)
{
	type = ref.getType();
}

Cure& Cure::operator=(const Cure &ref)
{
	if (this != &ref)
		type = ref.getType();
	return *this;
}

Cure::~Cure()
{

}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
