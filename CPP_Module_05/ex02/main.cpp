#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	try {
		Bureaucrat Benoit("Benoit", 113);
		ShrubberyCreationForm shrub("jardin");
		std::cout << shrub << std::endl;
		Benoit.signForm(shrub);
		std::cout << shrub << std::endl;
		Benoit.executeForm(shrub);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	try {
		Bureaucrat Jean("Jean", 18);
		RobotomyRequestForm robot("jardin");
		std::cout << robot << std::endl;
		Jean.signForm(robot);
		std::cout << robot << std::endl;
		Jean.executeForm(robot);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;
	
	try {
		Bureaucrat Mike("Mike", 4);
		PresidentialPardonForm pardon("Mike");
		std::cout << pardon << std::endl;
		Mike.signForm(pardon);
		std::cout << pardon << std::endl;
		Mike.executeForm(pardon);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;	
	
	try {
		Bureaucrat Marc("Marc", 18);
		ShrubberyCreationForm shrub2("entrée");
		std::cout << shrub2 << std::endl;
		Marc.executeForm(shrub2);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	std::cout << "---------------------------------------------------------" << std::endl;

	try {
		Bureaucrat Michel("Michel", 18);
		PresidentialPardonForm pardon2("Michel");
		Michel.signForm(pardon2);
		std::cout << pardon2 << std::endl;
		Michel.executeForm(pardon2);
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	return 0;
}