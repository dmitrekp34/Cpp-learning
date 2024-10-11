#include <iostream>

#define PROMPT_NAME1 "Enter a: "
#define PROMPT_NAME2 "Enter b: "
#define PROMPT_NAME3 "Enter c: "
#define PROMPT_NAME4 "Square "
#define PROMPT_NAME5 "Volume "

int main()
{
	float a, b, c, S;

	std::cout << PROMPT_NAME1;
	std::cin >> a;

	std::cout << PROMPT_NAME2;
        std::cin >> b;

	std::cout << PROMPT_NAME3;
        std::cin >> c;

	std::cout << PROMPT_NAME4 << 2*(a*b + b*c + a*c) << std::endl;
	std::cout << PROMPT_NAME5 << a*b*c << std::endl;

	return 0;
}
