#include "header.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Passer tom("Tom");
	std::cout << robert << jim << joe << tom;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tom);


	jim = joe;
	std::cout << jim;
	return 0;
}
