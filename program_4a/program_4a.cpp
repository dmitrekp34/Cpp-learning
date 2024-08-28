/*Program 4a. Power
Write a program that accepts two integers: 'base' and 'exponent'. Then, using a \"for\" loop, the program calculates the \"base\" to the power of the \"exponent\" and prints the result on the screen. The exponent cannot be negative.*/

#include <iostream>

#define PROMPT_NAME1 "This is the program that accepts two integers: 'base' and 'exponent'. Then, using a \"for\" loop, the program calculates the \"base\" to the power of the \"exponent\" and prints the result on the screen. The exponent cannot be negative."
#define PROMPT_NAME2 "Enter a base: "
#define PROMPT_NAME3 "Enter an exponent: "
#define PROMPT_NAME4 "The exponent cannot be negative."
#define PROMPT_NAME5 "^"
#define PROMPT_NAME6 " = "

int main()
{
	std::cout << PROMPT_NAME1 << std::endl;
	
	int b, e;
	std::cout << PROMPT_NAME2;
	std::cin >> b;
	std::cout << PROMPT_NAME3;
	std::cin >> e;

	if (e < 0) std::cout << PROMPT_NAME4 << std::endl;
	else if (e == 0) std::cout << b << PROMPT_NAME5 << e << PROMPT_NAME6 << 1 << std::endl;
	else
	{
		int p =	1;
		for (int i = 1; i <= e; i++)
		{
			p *= b;
		}
		std::cout << b << PROMPT_NAME5 << e << PROMPT_NAME6 << p << std::endl;
	
	}
	return 0;
}
