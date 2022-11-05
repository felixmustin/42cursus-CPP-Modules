#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) { }

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &F) : Form(F) {
    *this = F;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &F) {
    this->_target = F._target;
    return *this;
}

void ShrubberyCreationForm::executeDetails(void) const {
    std::ofstream out (this->_target + "_shrubbery");
    out <<
"       _-_ \n"
"    /~~   ~~\\ \n"
" /~~         ~~\\ \n"
"{               } \n"
" \\  _-     -_  / \n"
"   ~  \\\\ //  ~ \n"
"_- -   | | _- _ \n"
"  _ -  | |   -_ \n"
"      // \\\\ "
<< std::endl;

out.close();
}