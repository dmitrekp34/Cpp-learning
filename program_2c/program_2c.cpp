/* Program 2c. Parity and divisibility
Write a program that checks whether a given decimal integer is even and divisible by 8 and 16. The program outputs divisibility with the words YES and NO and outputs the given number in octal format. and hexadecimal.*/

#include <iostream>
#include <iomanip>

#define PROMPT_NAME1 "This is a program,that checks whether a given decimal integer is even and divisible by 8 and 16. The program outputs divisibility with the words YES and NO and outputs the given number in octal format. and hexadecimal."
#define PROMPT_NAME2 "Write an integer number: "
#define PROMPT_NAME3 "Divisibility by 2 - YES\n Divisibility by 8 - YES\n Divisibility by 16 - YES"
#define PROMPT_NAME4 "Divisibility by 2 - YES\n Divisibility by 8 - YES\n Divisibility by 16 - NO"
#define PROMPT_NAME5 "Divisibility by 2 - YES\n Divisibility by 8 - NO\n Divisibility by 16 - NO"
#define PROMPT_NAME6 "Divisibility by 2 - NO\n Divisibility by 8 - NO\n Divisibility by 16 - NO"
#define PROMPT_NAME7 "The number a in octal format is "
#define PROMPT_NAME8 "THe number a in hexadecimal format is "

#define PROMPT_NAME9 "Divisibility by 2 - YES"
#define PROMPT_NAME10 "Divisibility by 2 - NO"
#define PROMPT_NAME11 "Divisibility by 8 - YES"
#define PROMPT_NAME12 "Divisibility by 8 - NO"
#define PROMPT_NAME13 "Divisibility by 16 - YES"
#define PROMPT_NAME14 "Divisibility by 16 - NO"
int main()
{
 	std::cout << PROMPT_NAME1 << std::endl;

	int a;
	std::cout << PROMPT_NAME2;
	std::cin >> a;

/*	if (a%16 == 0) std::cout << PROMPT_NAME3 << std::endl;
	else if  (a%8 == 0) std::cout << PROMPT_NAME4 << std::endl;
	else if (a&2 == 0) std::cout << PROMPT_NAME5 << std::endl;
	else std::cout << PROMPT_NAME6 << std::endl;
	std::cout << PROMPT_NAME7 << std::showbase << std::oct << a << std::endl;
	std::cout << PROMPT_NAME8 << std::showbase << std::hex << a << std::endl;

	return 0;*/

	if (a % 2 == 0)
       	{
        std::cout << PROMPT_NAME9 << std::endl;
        } 
	else
       	{
        std::cout << PROMPT_NAME10 << std::endl;
        }

        if (a % 8 == 0)
       	{
        std::cout << PROMPT_NAME11 << std::endl;
        } 
	else
	}
        std::cout << PROMPT_NAME12 << std::endl;
        }

        if (a % 16 == 0)
       	{
        std::cout << PROMPT_NAME13 << std::endl;
        }
       	else
       	{
        std::cout << PROMPT_NAME14 << std::endl;
        }
	std::cout << PROMPT_NAME7 << std::showbase << std::oct << a << std::endl;
        std::cout << PROMPT_NAME8 << std::showbase << std::hex << a << std::endl;

	return 0;
}
