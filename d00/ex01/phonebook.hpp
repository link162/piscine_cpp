#ifndef PHONEBOOK
#define PHONEBOOK

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#define PRINT(str) std::cout << (str)
#define PRINTL(str) std::cout << (str) << std::endl

class PhoneMember {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	std::string cut_name(std::string str);

	public:

	void add_contact();
	void print_member();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();

};

#endif
