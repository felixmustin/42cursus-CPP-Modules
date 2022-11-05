#include "Intern.hpp"

Intern::Intern(void) {
    this->forms[0] = "shrubbery creation";
    this->forms[1] = "robotomy request";
    this->forms[2] = "presidential pardon";
}

Intern::~Intern(void) { }

Intern::Intern(Intern const &F) {
    *this = F;
}

Intern &Intern::operator=(Intern const &F) {
    (void) F;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
    Form *form;
    int i = -1;

    while (++i < 3) {
        if (formName == this->forms[i])
            break;
    }
    switch (i) {
		case 0: form = new ShrubberyCreationForm(formTarget); break;
		case 1: form = new RobotomyRequestForm(formTarget); break;
		case 2: form = new PresidentialPardonForm(formTarget); break;
		default: throw InvalidFormException();
	}
    std::cout << "Intern creates " + formName << std::endl;
    return form;
}

const char * Intern::InvalidFormException::what() const throw() {
    return ("Invalid form name");
}