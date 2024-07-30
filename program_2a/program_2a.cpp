/* Program 2a. ASCII
Write a program that loads a character into a char variable and then prints the character and its ASCII code in decimal and hexadecimal to the screen. */


#include <iostream>
#include <iomanip>

#define PROMPT_NAME1 "Enter a character: "
#define PROMPT_NAME2 "ASCII code (decimal): "
#define PROMPT_NAME3 "ASCII code (hexadecimal): "

int main()
{
	char ch;

	std::cout << "This program that loads a character into a char variable and then prints the character and its ASCII code in decimal and hexadecimal to the screen." << std::endl;

	std::cout << PROMPT_NAME1;
	std::cin >> ch;
	std::cout << PROMPT_NAME2 << static_cast<int>(ch) << std::endl;
	std::cout << PROMPT_NAME3 << std::showbase << std::hex << static_cast<int>(ch) << std::endl;

	return 0;
}
