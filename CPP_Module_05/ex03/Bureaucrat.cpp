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
    std::cout << "Bureaucrat assignation operator" << std::endl;
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

void Bureaucrat::signForm(Form &form) const {
    if (!form.getIsSign()) {
        try {
            form.beSigned(*this);
            std::cout << this->_name << " signed " << form.getName() << std::endl;
        }
        catch (Form::GradeTooLowException& ex) {
            std::cout << this->_name << " couldn't sign " << form.getName() << " because : " << ex.what() << std::endl;
        }
    }
    else
        std::cout << "Form alredy signed" << std::endl;
}

void Bureaucrat::executeForm(Form const & form) {
    try {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (Form::ExecuteErrorException& ex) {
        std::cout << this->_name << " couldn't execute " << form.getName() << " because : " << ex.what() << std::endl;
    }
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