#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(PresidentialPardonForm const &F);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &F);

    void executeDetails() const;
};

#endif