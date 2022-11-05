#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm(void);
    ShrubberyCreationForm(ShrubberyCreationForm const &F);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &F);

    void executeDetails() const;
};

#endif