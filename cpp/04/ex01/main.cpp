#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// void   check_leak(void)
// {
// 	system("leaks Brain");
// }

int main()
{
	//atexit(check_leak);
	std::string str;
	Animal *meta[4];

	std::cout << "upcasting test" << std::endl;
	meta[0] = new Dog();
	meta[1] = new Dog();
	meta[2] = new Cat();
	meta[3] = new Cat();
	std::cout << std::endl;
	
	delete meta[0];
	delete meta[1];
	delete meta[2];
	delete meta[3];
	std::cout << std::endl;

	std::cout << "deepCopy test" << std::endl;
	Dog *d = new Dog();
	Dog *d2 = new Dog();
	std::cout << std::endl;

	str = d->getBrain()->getIdeas(0);
	std::cout << "Dog1_idea1 = "<< str << std::endl;

	d->getBrain()->setIdeas("idea2", 0);
	str = d->getBrain()->getIdeas(0);
	std::cout << "Dog1_idea1 = "<< str << std::endl;

	*d2 = *d;
	str = d2->getBrain()->getIdeas(0);
	std::cout << "Dog2_idea1 = "<< str << std::endl;

	std::cout << std::endl;
	delete d;
	d = NULL;
	delete d2;
	d2 = NULL;

	return 0;
}