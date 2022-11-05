#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

private:
    std::string _type;
public:
    Cat();
    Cat(const Cat &);
    Cat &operator=(const Cat&);
    ~Cat(void);
    void makeSound(void) const;
};

#endif