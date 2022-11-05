#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) { }

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &F) : Form(F) {
    *this = F;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &F) {
    this->_target = F._target;
    return *this;
}

void PresidentialPardonForm::executeDetails(void) const {
    std::cout << this->_target << " was pardoned by Zaphod Beeblebrox" << std::endl;
}