#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {

	try {
		Bureaucrat Marc("Marc", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Marc.signForm(*rrf);
		Marc.executeForm(*rrf);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	try {
		Bureaucrat Philippe("Philippe", 10);
		Intern someRandomIntern2;
		Form* ppf;
		ppf = someRandomIntern2.makeForm("presidential pardon", "Claude");
		Philippe.signForm(*ppf);
		Philippe.executeForm(*ppf);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	try {
		Bureaucrat Louis("Louis", 10);
		Intern someRandomIntern3;
		Form* zzz;
		zzz = someRandomIntern3.makeForm("personalized form", "Bender");
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;
	return 0;
}