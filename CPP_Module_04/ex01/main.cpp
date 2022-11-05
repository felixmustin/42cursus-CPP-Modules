#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;

    const Animal *tab[10];
    for (int i = 0; i < 10; i++) {
        if (i < 5)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

    std::cout << tab[0]->getType() << std::endl;
	std::cout << tab[5]->getType() << std::endl;

	Brain *brain;
	brain = tab[0]->getBrain();
	brain->setIdea("I want food!", 0);
	brain->setIdea("I am sleepy", 1);
	std::cout << tab[0]->getBrain()->getIdea(0) << std::endl;
	std::cout << tab[0]->getBrain()->getIdea(1) << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;

	std::cout << "Deep copy of Dog class using copy constructor:\n" << std::endl;
	Dog *dogA = new Dog;
	dogA->getBrain()->setIdea("I am hungry", 0);

	Dog *dogB = new Dog(*dogA);
	std::cout << dogB->getBrain()->getIdea(0) << std::endl;

	delete dogA;
	delete dogB;

	std::cout << "---------------------------------------------------------------" << std::endl;

	std::cout << "Deep copy of Dog class using assignment operator:\n" << std::endl;
	Dog *dogC = new Dog;
	dogC->getBrain()->setIdea("I am hungry", 0);

	Dog *dogD = new Dog;
	*dogD = *dogC;
	std::cout << dogD->getBrain()->getIdea(0) << std::endl;

	delete dogC;
	delete dogD;

	std::cout << "---------------------------------------------------------------" << std::endl;
	
	std::cout << "Deep copy of Cat class using copy constructor:\n" << std::endl;
	Cat *catA = new Cat;
	Cat *catB = new Cat(*catA);

	delete catA;
	delete catB;

	std::cout << "---------------------------------------------------------------" << std::endl;

	std::cout << "Deep copy of Cat class using assignment operator :\n" << std::endl;
	Cat *catC = new Cat;
	Cat *catD = new Cat;

	*catC = *catD;
	delete catC;
	delete catD;

	std::cout << "---------------------------------------------------------------" << std::endl;

    delete j;
    delete i;

	for (int i = 0; i < 10; i++)
		delete tab[i];

    return 0;
}