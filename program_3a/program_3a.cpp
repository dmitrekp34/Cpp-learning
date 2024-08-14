/*Write program which converts from one unit of temperature to another one according to the scheme*/

#include <iostream>

#define PROMPT_NAME1 "This is the program which converts from one unit of temperature to another one according to the scheme"
#define PROMPT_NAME2 "Enter a unit (F, C or K): "
#define PROMPT_NAME3 "Enter a value of temperature: "
#define PROMPT_NAME4 " is "
#define PROMPT_NAME5  "Supplied temperature: "
#define PROMPT_NAME6 " C"
#define PROMPT_NAME7 " K"
#define PROMPT_NAME8 " F"
#define PROMPT_NAME9 "Error! Choose a right unit of temperature!"
int main()
{
	std::cout << PROMPT_NAME1 << std::endl;
	
	std::cout << PROMPT_NAME2;
	char unit;
	std::cin >> unit;
	std::cout << PROMPT_NAME3;
	float value;
	std::cin >> value;
	float Tk;
       	float Tf;
        float Tc;
	if (unit == 'F')
	{
	Tf = value;
	Tc = (Tf - 32)*5/9;
	Tk = Tc + 273.15;
	std::cout << PROMPT_NAME5 << Tf << unit << std::endl;
	std::cout << Tf << unit << PROMPT_NAME4 << Tc << PROMPT_NAME6 << std::endl;
	std::cout << Tf << unit << PROMPT_NAME4 << Tk << PROMPT_NAME7 << std::endl;
	}
	
	else if (unit == 'K')
	{
	Tk = value;
        Tc = Tk - 273.15;
	Tf = (Tc * 9/5) + 32;
	std::cout << PROMPT_NAME5 << Tk	<< std::endl;
	std::cout << Tk << unit << PROMPT_NAME4 << Tc << PROMPT_NAME6 << std::endl;
	std::cout << Tk << unit << PROMPT_NAME4 << Tf << PROMPT_NAME8 << std::endl;	
	}

	else if (unit == 'C')
        {
        Tc = value;
        Tk = Tc + 273.15;
        Tf = (Tc * 9/5) + 32;
        std::cout << PROMPT_NAME5 << Tc << std::endl;
        std::cout << Tc << unit << PROMPT_NAME4 << Tk << PROMPT_NAME7 << std::endl;
        std::cout << Tc << unit << PROMPT_NAME4 << Tf << PROMPT_NAME8 << std::endl;
        }
	else std::cout << PROMPT_NAME9 << std::endl;


return 0; 
}
