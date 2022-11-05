#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
    const std::string _name;
    int _grade;
    bool isGradeTooHigh();
    bool isGradeTooLow();
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat(Bureaucrat const &B);
    Bureaucrat &operator=(Bureaucrat const &B);

    const std::string &getName() const;
    int getGrade() const;
    void incrGrade(void); // 1 highest - 150 lowest
    void decrGrade(void);

    void signForm(Form &form) const;

    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &B);

#endif