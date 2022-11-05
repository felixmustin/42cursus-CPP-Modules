#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

private:
    std::string _type;
    Brain* _brain;
public:
    Cat();
    Cat(const Cat &C);
    Cat &operator=(const Cat& C);
    ~Cat(void);
    void makeSound(void) const;
    Brain* getBrain(void) const;
};

#endif