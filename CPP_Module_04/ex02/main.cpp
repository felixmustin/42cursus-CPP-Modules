#include "Dog.hpp"
#include "Cat.hpp"

int main()
{	
	//const Animal* j = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
	
	delete j;
	delete i;

    return 0;
}