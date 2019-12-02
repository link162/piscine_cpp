#include "phonebook.hpp"

std::string PhoneMember::cut_name(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return str;
}

void PhoneMember::print_member()
{
	PRINTL(first_name);
	PRINTL(last_name);
	PRINTL(nickname);
	PRINTL(login);
	PRINTL(postal_address);
	PRINTL(email_address);
	PRINTL(phone_number);
	PRINTL(birthday_date);
	PRINTL(favorite_meal);
	PRINTL(underwear_color);
	PRINTL(darkest_secret);
}

std::string PhoneMember::get_first_name()
{
	return cut_name(first_name);
}

std::string PhoneMember::get_last_name()
{
	return cut_name(last_name);
}

std::string PhoneMember::get_nickname()
{
	return cut_name(nickname);
}

void PhoneMember::add_contact()
{
	 PRINT("\n\tEnter first name : ");
	 getline(std::cin, first_name);
	 PRINT("\n\tEnter last name : ");
	 getline(std::cin, last_name);
	 PRINT("\n\tEnter nickname : ");
	 getline(std::cin, nickname);
	 PRINT("\n\tEnter login : ");
	 getline(std::cin, login);
	 PRINT("\n\tEnter postal address : ");
	 getline(std::cin, postal_address);
	 PRINT("\n\tEnter email address : ");
	 getline(std::cin, email_address);
	 PRINT("\n\tEnter phone number : ");
	 getline(std::cin, phone_number);
	 PRINT("\n\tEnter birthday date : ");
	 getline(std::cin, birthday_date);
	 PRINT("\n\tEnter favorite meal : ");
	 getline(std::cin, favorite_meal);
	 PRINT("\n\tEnter underwear color : ");
	 getline(std::cin, underwear_color);
	 PRINT("\n\tEnter darkest secret : ");
	 getline(std::cin, darkest_secret);
	 PRINTL("\tSUCCESS!");
}

void find_user(PhoneMember *phonebook, int phone_count)
{
	if (!phone_count)
	{
		PRINTL("Phonebook is empty!");
		return;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|"<< std::setw(10) << "Last name" << "|"<< std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < phone_count && i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << phonebook[i].get_first_name() << "|"<< std::setw(10) << phonebook[i].get_last_name() << "|"<< std::setw(10) << phonebook[i].get_nickname() << "|" << std::endl;
	}
	PRINT("Enter index : ");
	std::string ask;
	getline(std::cin, ask);
	int i;
	std::istringstream(ask) >> i;
	if (i < phone_count + 1 && i < 9 && i > 0)
		phonebook[i - 1].print_member();
	else
		PRINTL("Didn't find a match");
}

int main(void)
{
	system("clear");
	PRINTL("Welcome to phonebook! You are able to save 8 your contacts. In case you overlap your phonebook, your new contact will rewrite old one. Be cerefull, you could lose your data!");
	PhoneMember phonebook[8];
	int phone_count = 0;
	while (1)
	{
		PRINTL("Please perform action:\n\
				ADD	add new contact\n\
				SEARCH	find special contact\n\
				EXIT	exit from phonebook. all data will be lost");
		std::string ask;
		getline(std::cin, ask);
		if (!(ask.compare("EXIT")))
			break;
		else if (!(ask.compare("ADD")))
			phonebook[phone_count++ % 8].add_contact();
		else if (!(ask.compare("SEARCH")))
			find_user(phonebook, phone_count);
		else
			PRINTL("Unknown command!!!");
		if (phone_count > 7)
		{
			PRINTL("You reach max size of phonebook! If you will add one more user, you will lost data about another one!");
		}
	}
}
