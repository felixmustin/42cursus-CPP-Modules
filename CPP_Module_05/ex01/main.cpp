#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	//OK
	try {
		Bureaucrat Benoit("Benoit", 18);
		Form form1("client1", 20, 10);
		std::cout << form1 << std::endl;
		Benoit.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	//CATCH FORM TOO HIGH
	try {
		Bureaucrat Marc("Marc", 18);
		Form form2("client2", 151, 10);
		std::cout << form2 << std::endl;
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	//CATCH FORM TOO LOW
	try {
		Bureaucrat Michel("Michel", 18);
		Form form3("client3", 20, 0);
		std::cout << Michel << std::endl;
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	try {
		Bureaucrat Remy("Remy", 18);
		Form form4("client4", 20, 10);
		std::cout << form4 << std::endl;
		Remy.decrGrade();
		Remy.decrGrade();
		Remy.decrGrade();
		std::cout << Remy << std::endl;
		Remy.signForm(form4);
		std::cout << form4 << std::endl;
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}
	
	std::cout << "---------------------------------------------------------" << std::endl;

	return 0;
}