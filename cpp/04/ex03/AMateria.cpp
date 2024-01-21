#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	type = "";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &ref)
{
	this->type = ref.getType();
}

AMateria&	AMateria::operator=(const AMateria &ref)
{
	if (this != &ref)
		this->type = ref.getType();
	return *this;
}

AMateria::~AMateria()
{

}

std::string	const & AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter& target)
{
	static_cast<void>(target);
}
