/*Program 2 years. Conversion of units
Write a program that has two parameters:
the first parameter is one of the options:
1 – converting units from Celsius to Fahrenheit,
2 – conversion of Fahrenheit units to Celsius,
the second parameter is a real number expressing the temperature.
Depending on the first parameter, the program converts the temperature given in the second parameter between Fahrenheit and Celsius. After the conversion, the program displays the calculated value on the screen with an accuracy of two decimal places.*/

#include <iostream>
#include <iomanip>

#define PROMPT_NAME1 "The program converts the temperature given in the second parameter between Fahrenheit and Celsius. After the conversion, the program displays the calculated value on the screen with an accuracy of two decimal places. Write 1 if you want to convert from Celsius to Farenheit or 2 if vice versa"
#define PROMPT_NAME2 "From what unit to what do you want to convert? "
#define PROMPT_NAME3 "Write the value of temperature: "
#define PROMPT_NAME4 "It is so cold for any calculations!"
#define PROMPT_NAME5 " C is "
#define PROMPT_NAME6 " F"
#define PROMPT_NAME7 " F is "
#define PROMPT_NAME8 " C"
#define PROMPT_NAME9 "Error! Write 1 or 2, please!"

int main()
{
	std::cout << PROMPT_NAME1 << std::endl;
	int unit;
	float temp;
	std::cout << PROMPT_NAME2;
	std::cin >> unit;
	std::cout << PROMPT_NAME3;
	std::cin >> temp;

	if (unit == 1)
		{
			if (temp < -273.15) std::cout << PROMPT_NAME4 << std::endl;
			else
				{
				float F, C;
				C = temp;
				F = (C * 9/5) + 32;
				std::cout << std::fixed << std::setprecision(2);
				std::cout << C << PROMPT_NAME5 << F << PROMPT_NAME6 <<  std::endl;
				}
			
		}
	else if (unit == 2)
		{
			if (temp < -459.67) std::cout << PROMPT_NAME4 << std::endl;
			else
				{
				float F, C;
				F = temp;
				C = (F - 32)*5/9;
				std::cout << std::fixed << std::setprecision(2);
				std::cout << F << PROMPT_NAME7 << C << PROMPT_NAME8 << std::endl;
				}
	
		}
	else 
		{
			std::cout << PROMPT_NAME9 << std::endl;

		}
	return 0;
}

