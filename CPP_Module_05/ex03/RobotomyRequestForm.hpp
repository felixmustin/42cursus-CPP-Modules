#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(RobotomyRequestForm const &F);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &F);

    void executeDetails() const;
};

#endif