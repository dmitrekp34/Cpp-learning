#include <iostream>


#define PROMPT_NAME1 "Podaj a: "
#define PROMPT_NAME2 "Podaj b: "
#define PROMPT_NAME3 "Suma: "
#define PROMPT_NAME4 "Różnica: "
#define PROMPT_NAME5 "Iloczyn: "

int main()
{
	int a, b;

	std::cout << PROMPT_NAME1;
	std::cin >> a;

	std::cout << PROMPT_NAME2;
	std::cin >> b;

	std::cout << PROMPT_NAME3 << a + b << std::endl;
	std::cout << PROMPT_NAME4 << a - b << std::endl;
	std::cout << PROMPT_NAME5 << a*b << std::endl;

	return 0;
}
