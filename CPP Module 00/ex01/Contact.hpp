#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iomanip> 

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _number;
        std::string _darkest_secret;
    public:
        Contact(void);
        ~Contact(void);
        std::string getFname();
		std::string getLname();
		std::string getNick();
		std::string getNum();
		std::string getSecret();
        void setFname(std::string fname);
		void setLname(std::string lname);
		void setNick(std::string nik);
		void setNum(std::string numb);
		void setSecret(std::string secret);
};

#endif