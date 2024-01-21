#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	type = "ice";	
}

Ice::Ice(const Ice &ref)
{
	type = ref.getType();
}

Ice& Ice::operator=(const Ice &ref)
{
	if (this != &ref)
		type = ref.getType();
	return *this;
}

Ice::~Ice()
{

}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
