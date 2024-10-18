/*Write a program that reads two numbers with a chosen precision and then calculates and prints the results of operations (sum, difference, product, and quotient) with an accuracy of up to the 12th decimal place.*/

#include <iostream>
#include <iomanip>

#define PROMPT_NAME1 "This program reads two numbers with a chosen precision and then calculates and prints the results of operations (sum, difference, product, and quotient) with an accuracy of up to the 12th decimal place."
#define PROMPT_NAME2 "Choose precision (write 1 for single precision, 2 - for double precision): "
#define PROMPT_NAME3 "Write a: "
#define PROMPT_NAME4 "Write b: "
#define PROMPT_NAME5 "Sum is: "
#define PROMPT_NAME6 "Difference is: "
#define PROMPT_NAME7 "Product is: "
#define PROMPT_NAME8 "Quotient is: "
#define PROMPT_NAME9 "Wrong choice!"

int main()
{
	int pr;
	std::cout << PROMPT_NAME1 << std::endl;
	std::cout << PROMPT_NAME2;
	std::cin >> pr;
	if (pr == 1)
	{
		float a, b;
		std::cout << PROMPT_NAME3;
		std::cin >> a;
		std::cout << PROMPT_NAME4;
		std::cin >> b;
		std::cout << std::fixed << std::setprecision(12);
		std::cout << PROMPT_NAME5 << a + b << std::endl;
		std::cout << PROMPT_NAME6 << a - b << std::endl;
		std::cout << PROMPT_NAME7 << a * b << std::endl;
		std::cout << PROMPT_NAME8 << a / b << std::endl;
	}

	else if (pr == 2)
        {
                double a, b;
                std::cout << PROMPT_NAME3;
                std::cin >> a;
                std::cout << PROMPT_NAME4;
                std::cin >> b;
                std::cout << std::fixed << std::setprecision(12);
                std::cout << PROMPT_NAME5 << a + b << std::endl;
                std::cout << PROMPT_NAME6 << a - b << std::endl;
                std::cout << PROMPT_NAME7 << a * b << std::endl;
                std::cout << PROMPT_NAME8 << a / b << std::endl;
        }
	
	else std::cout << PROMPT_NAME9 << std::endl;

	return 0;

}

