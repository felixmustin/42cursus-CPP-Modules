#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <limits>
#include <math.h> 

class Convert {

private:
    int _type; //-1 : not valid 1:int 2:char 3:float 4:double
    int _int;
    char _char;
    float _float;
    double _double;
    int getType(std::string input);

public:
    Convert();
    ~Convert(void);
    Convert(Convert const &B);
    Convert &operator=(Convert const &B);
    void process(std::string input);

    void display_int(void);
    void display_char(void);    
    void display_float(void);
    void display_double(void);
    void display_impossible(void);
};

#endif