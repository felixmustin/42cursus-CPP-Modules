#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
    std::string forms[3];
public:
    Intern(void);
    ~Intern(void);
    Intern(Intern const &F);
    Intern &operator=(Intern const &F);

    Form *makeForm(std::string formName, std::string formTarget);

    class InvalidFormException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

#endif