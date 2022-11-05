#include "Form.hpp"

Form::Form(void) : _name("Default"), _isSigned(false), _signGrade(1), _execGrade(1) { }

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {
    checkGrade(this->_execGrade);
    checkGrade(this->_signGrade);
}

Form::~Form(void) { }

Form::Form(Form const &F) : _name(F._name), _isSigned(F._isSigned), _signGrade(F.getSignGrade()), _execGrade(F.getExecGrade()) {
    checkGrade(this->_execGrade);
    checkGrade(this->_signGrade);
}

Form &Form::operator=(Form const &F) {
    _isSigned = F.getIsSign();
    return *this;
}

void Form::checkGrade(int grade) {
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
}

const std::string &Form::getName() const {
    return this->_name;
}

int Form::getSignGrade() const {
    return this->_signGrade;
}

int Form::getExecGrade() const {
    return this->_execGrade;
}

bool Form::getIsSign() const {
    return this->_isSigned;
}

void Form::beSigned(const Bureaucrat &B) {
    if (B.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    else {
        this->_isSigned = true;
    }
}

void Form::execute(Bureaucrat const & executor) const {
    if (this->_isSigned) {
        if (executor.getGrade() <= this->getExecGrade())
            this->executeDetails();
        else
            throw Form::ExecuteErrorException();
    }
    else {
        throw Form::ExecuteErrorException();
    }
}

const char * Form::GradeTooHighException::what() const throw() {
    return ("Form grade too high");
}

const char * Form::GradeTooLowException::what() const throw() {
    return ("Form grade too low");
}

const char * Form::ExecuteErrorException::what() const throw() {
    return ("Form must be signed and executor's grade must be valid");
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << "Form : " << form.getName() << ", sign grade : " << form.getSignGrade() << ", exec grade : " << form.getExecGrade();
    if (form.getIsSign())
        out << " -> Is signed";
    else
        out << " -> Isn't signed";
    return (out); 
}