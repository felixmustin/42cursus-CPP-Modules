#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) { }

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &F) : Form(F) {
    *this = F;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &F) {
    this->_target = F._target;
    return *this;
}

void RobotomyRequestForm::executeDetails(void) const {

std::cout << "BrrrRRRRRrrrRRRRR" << std::endl;

if (rand() % 2 != 0)
    std::cout << this->_target << " was robotomyzed" << std::endl;
else
    std::cout << "Failed robotomyze operation" << std::endl;
}