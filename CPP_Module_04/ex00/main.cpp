#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;

    const WrongAnimal* wrong1 = new WrongAnimal();
    const WrongAnimal* wrong2 = new WrongCat();

    wrong1->makeSound();
    wrong2->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrong1;
    delete wrong2;

    return 0;
}