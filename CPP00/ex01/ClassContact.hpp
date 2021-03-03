#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

#include <string>
#include <iostream>
#include <cstring>

class Contact
{
    public :
    Contact(void);
    std::string getIndex(void);
	std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    void        GetAllAttributes(void);
	void        setAllAttributes(void);

    //attributs
    private :
    static int      _cpt;
    std::string     _index;
    std::string     _first_name;
    std::string     _last_name;
    std::string     _nickname;
    std::string     _login;
    std::string     _postal_address;
    std::string     _email_address;
    std::string     _phone_number;
    std::string     _birthday_date;
    std::string     _favorite_meal;
    std::string     _underwear_color;
    std::string     _darkest_secret;
};

#endif