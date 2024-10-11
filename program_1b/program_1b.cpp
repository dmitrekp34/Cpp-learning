#include <iostream>
#include <string>

#define PROMPT_NAME1 "Podaj imie: "
#define PROMPT_NAME2 "Siema "
#define PROMPT_NAME3 "!"

int main()
{
	std::string name;
	std::cout << PROMPT_NAME1;
	std::cin >> name;
	std::cout << PROMPT_NAME2 << name << PROMPT_NAME3 <<  std::endl;

	return 0;
}
