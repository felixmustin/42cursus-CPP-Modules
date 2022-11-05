#include "Convert.hpp"

Convert::Convert() {}

int is_int(std::string str, int len) {
    int i = 0;

    if (str[i] == '-')
        i++;
    while (i < len) {
        if (str[i] < 48 || str[i] > 57)
            return 0;
        i++;
    }
    return 1;
}

int is_char(std::string str, int len) {
    if (len != 1)
        return 0;
    if (str[0] >= 32 && str[0] <= 126)
        return 1;
    else
        return 0;
}

int is_float(std::string str, int len) {
	int	i = -1;
    int pt = -1;

    if (str[++i] == '-')
        i++;
    while (str[i]) {
        if ((str[i] < 48 || str[i] > 57) && str[i] != '.' && str[i] != 'f')
            return 0;
        if (str[i] == '.' || str[i] == 'f')
            ++pt;
        i++;}
    if (pt != 1 || str[len-1] != 'f')
        return (0);
    i = -1;
    while (str[++i]) {
	    if (str[i] == '.') {
            if (str[i + 1] < 48 || str[i + 1] > 57)
                return 0;
	    }}
    return 1;
}

int is_double(std::string str, int len) {
	int	i = -1;
    int pt = -1;

    if (str[++i] == '-')
        i++;
    while (str[i]) {
        if ((str[i] < 48 || str[i] > 57) && str[i] != '.')
            return 0;
        if (str[i] == '.')
            ++pt;
        i++;}
    if (pt != 0)
        return 0;
    i = -1;
    while (str[++i]) {
	    if (str[i] == '.') {
            if (i > 0 && i < len - 1)
                return 1;
	    }
    }
    return 0;
}

int Convert::getType(std::string input) {
    int i = -1;
    std::string spe_double[] = {"inf", "+inf", "-inf", "nan"};
    std::string spe_float[] = {"inff", "+inff", "-inff", "nanf"};
    while (++i < 4) {
        if (input == spe_double[i])
            return 4;
        if (input == spe_float[i])
            return 3;
    }
    int len;
    len = input.length();
    if (len <= 0)
        return -1; //throw
    if (is_int(input, len))
        return 1;
    if (is_char(input, len))
        return 2;
    if (is_float(input, len))
        return 3;
    if (is_double(input, len))
        return 4;
    return -1;
}

void Convert::process(std::string input) {
    this->_type = getType(input);
    if (this->_type == 1) {
        this->_int = atoi(input.c_str());
        display_int();
    }
    else if (this->_type == 2) {
        this->_char = input[0];
        display_char();
    }
    else if (this->_type == 3) {
        this->_float = atof(input.c_str());
        display_float();
    }
    else if (this->_type == 4) {
        this->_double = atof(input.c_str());
        display_double();
    }
    if (this->_type == -1) {
        display_impossible();
    }
}

bool valid_char(double number) {
    if (number >= 32 && number <= 126)
        return true;
    else if (number >= 0 && number <= 127) {
        std::cout << "char: Non displayable" << std::endl;
        return false;
    }
    std::cout << "char: Impossible" << std::endl;
    return false;
}

bool valid_int(double number) {
    if (number <= std::numeric_limits<int>::max() && number >= std::numeric_limits<int>::min())
        return true;
    std::cout << "int: Impossible" << std::endl;
    return false;
}

bool valid_float(double number) {
    if ((number <= std::numeric_limits<float>::max() && number >= -std::numeric_limits<float>::max()) || number == std::numeric_limits<float>::infinity() || number == -std::numeric_limits<float>::infinity() || isnan(number))
        return true;
    std::cout << "float: Impossible" << std::endl;
    return false;
}

bool valid_double(double number) {
    if ((number <= std::numeric_limits<double>::max() && number >= -std::numeric_limits<double>::max()) || number == std::numeric_limits<double>::infinity() || number == -std::numeric_limits<double>::infinity() || isnan(number))
        return true;
    std::cout << "double: Impossible" << std::endl;
    return false;
}

std::string str_dot(double number) {
    std::string e = "";
    std::string d = ".0";
    if (number - static_cast<int>(number) == 0.0)
        return (d);
    return (e);
}

void Convert::display_int() {
    if (valid_char(this->_int))
        std::cout << "char : " << static_cast<char>(this->_int) << std::endl;
    if (valid_int(this->_int))
        std::cout << "int : " << this->_int << std::endl;
    if (valid_float(this->_int))
        std::cout << "float : " << static_cast<float>(this->_int) << str_dot(this->_int) << "f" << std::endl;
    if (valid_double(this->_int))
        std::cout << "double : " << static_cast<double>(this->_int) << str_dot(this->_int) << std::endl;
}

void Convert::display_char() {
    std::cout << "char : " << (this->_char) << std::endl;
    std::cout << "int : " << static_cast<int>(this->_char) << std::endl;
    std::cout << "float : " << static_cast<float>(this->_char) << str_dot(this->_char) << "f" << std::endl;
    std::cout << "double : " << static_cast<double>(this->_char) << str_dot(this->_char) << std::endl;
}

void Convert::display_float() {
    if (valid_char(this->_float))
        std::cout << "char : " << static_cast<char>(this->_float) << std::endl;
    if (valid_int(this->_float))
        std::cout << "int : " << static_cast<int>(this->_float) << std::endl;
    std::cout << "float : " << (this->_float) << str_dot(this->_float) << "f" << std::endl;
    if (valid_double(this->_float))
        std::cout << "double : " << static_cast<double>(this->_float) << str_dot(this->_float) << std::endl;
}

void Convert::display_double() {
    if (valid_char(this->_double))
        std::cout << "char : " << static_cast<char>(this->_double) << std::endl;
    if (valid_int(this->_double))
        std::cout << "int : " << static_cast<int>(this->_double) << std::endl;
    if (valid_float(this->_double))
        std::cout << "float : " << static_cast<float>(this->_double) << str_dot(this->_double) << "f" << std::endl;
    std::cout << "double : " << (this->_double) << str_dot(this->_double) << std::endl;
}

void Convert::display_impossible() {
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : impossible" << std::endl;
    std::cout << "double : impossible" << std::endl;
}


Convert::~Convert(void) {}
Convert::Convert(Convert const &B) {
    *this = B;
}
Convert &Convert::operator=(Convert const &B) {
    if (this != &B)
        this->_type = B._type;
    return *this;
}