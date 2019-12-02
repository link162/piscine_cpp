#include <iostream>

#define PRINT(str) std::cout << (str)

int main(int argc, char **argv)
{
	if (argc > 1)
		for (int i = 1; i < argc; i++)
			PRINT(argv[i]);
	else
		PRINT("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	PRINT("\n");
}
