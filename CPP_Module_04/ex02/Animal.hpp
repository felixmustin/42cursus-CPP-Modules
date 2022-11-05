#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {

protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal &);
    Animal &operator=(const Animal&);
    virtual ~Animal(void);
    virtual void makeSound(void) const = 0;
    virtual Brain* getBrain(void) const = 0;
    const std::string getType(void) const;
};

#endif