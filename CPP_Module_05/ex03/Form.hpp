#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _execGrade;
    void checkGrade(int grade);
public:
    Form();
    Form(std::string name, int signGrade, int execGrade);
    ~Form(void);
    Form(Form const &F);
    Form &operator=(Form const &F);

    const std::string &getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getIsSign() const;
    void beSigned(const Bureaucrat &B);

    void execute(Bureaucrat const & executor) const;
    virtual void executeDetails(void) const = 0;

    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
    class ExecuteErrorException : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};

std::ostream &operator<<(std::ostream &out, Form const &B);


#endif