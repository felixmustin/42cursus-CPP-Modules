#include "Bureaucrat.hpp"

int main() {

	//OK
	try {
		Bureaucrat Benoit("Benoit", 18);
		Benoit.decrGrade();
		std::cout << Benoit << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	//CATCH TOO HIGH INIT
	try {
		Bureaucrat Marc("Marc", 0);
		Marc.decrGrade();
		std::cout << Marc << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	//CATCH TOO LOW INIT
	try {
		Bureaucrat Michel("Michel", 151);
		std::cout << Michel << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------" << std::endl;
	//CATCH TOO LOW 
	try {
		Bureaucrat Remy("Remy", 150);
		Remy.incrGrade();
		std::cout << Remy << std::endl;
		Remy.decrGrade();
		std::cout << Remy << std::endl;
		Remy.decrGrade();
		std::cout << Remy << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	Bureaucrat Jean("Jean", 23);
	Bureaucrat Jean2(Jean);
	Bureaucrat Jean3 = Jean;
	
	std::cout << Jean2.getGrade() << " and " << Jean3.getGrade() << std::endl;

	return 0;
}