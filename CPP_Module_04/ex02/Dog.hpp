#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog :  public Animal{

private:
    std::string _type;
    Brain* _brain;
public:
    Dog();
    Dog(const Dog &D);
    Dog &operator=(const Dog& D);
    ~Dog(void);
    void makeSound(void) const;
    Brain* getBrain(void) const;
};

#endif