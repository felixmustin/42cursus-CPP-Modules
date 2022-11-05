#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "Bureaucrat " << _name << " default constructor" << std::endl;
    if (isGradeTooHigh())
        throw GradeTooHighException();
    if (isGradeTooLow())
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat " << _name << " destructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &B) : _name(B.getName()), _grade(B.getGrade()) {
    std::cout << "Bureaucrat " << _name << " copy constructor" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &B) {
    std::cout << "Bureaucrat " << _name << " assignation operator" << std::endl;
    if (this != &B)
        this->_grade = B._grade;
    return *this;
}

bool Bureaucrat::isGradeTooHigh() {
    return (this->_grade < 1);
}

bool Bureaucrat::isGradeTooLow() {
    return (this->_grade > 150);
}

const std::string &Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}
void Bureaucrat::incrGrade(void) {
    this->_grade--;
    if (isGradeTooHigh())
        throw GradeTooHighException();
}
void Bureaucrat::decrGrade(void) {
    this->_grade++;
    if (isGradeTooLow())
        throw GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &B) {
    out << B.getName() << ", bureaucrat grade " << B.getGrade() << ".";
	return (out);
}
