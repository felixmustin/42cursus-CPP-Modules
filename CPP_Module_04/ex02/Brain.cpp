#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &B) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = B;
}

Brain &Brain::operator=(Brain const &B) {
    std::cout << "Brain copy assignement operator called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->_ideas[i] = B.getIdea(i);
	return *this;
}
Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
}

const std::string &Brain::getIdea(int i) const {
    return this->_ideas[i];
}
void Brain::setIdea(std::string idea, int i) {
    this->_ideas[i] = idea;
}
