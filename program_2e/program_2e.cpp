/*Program 2e. Write a program that reads a real number with precision to one decimal place. This number should be in the range 0.0 ... 9.0 and express the number of points from the colloquium.

The program, using the conditional instruction 'if-else', provides (prints to the screen) the grade resulting from these points according to the scheme:

0.0 ... 4.4 - insufficient grade (2.0),
4.5 ... 5.2 - satisfactory grade (3.0),
5.3 ... 6.2 - more than satisfactory grade (3.5),
6.3 ... 7.2 - good grade (4.0),
7.3 ... 8.2 - more than good grade (4.5),
8.3 ... 9.0 - very good grade (5.0).
In other cases, the message "Incorrect number of points!" is displayed.*/

#include <iostream>
#include <iomanip>

#define PROMPT_NAME1 "The program reads a real number with precision to one decimal place. This number should be in the range 0.0 ... 9.0 and express the number of points from the colloquium.\nThe program, using the conditional instruction 'if-else', provides (prints to the screen) the grade resulting from these points according to the scheme: \n0.0 ... 4.4 - insufficient grade (2.0),\n4.5 ... 5.2 - satisfactory grade (3.0),\n5.3 ... 6.2 - more than satisfactory grade (3.5),\n6.3 ... 7.2 - good grade (4.0),\n7.3 ... 8.2 - more than good grade (4.5),\n8.3 ... 9.0 - very good grade (5.0).\n In other cases, the message \"Incorrect number of points!\" is displayed."
#define PROMPT_NAME2 "Please enter your number of points: "
#define PROMPT_NAME3 "Insufficient grade (2.0)"
#define PROMPT_NAME4 "Satisfactory grade (3.0)"
#define PROMPT_NAME5 "More than satisfactory grade (3.5)"
#define PROMPT_NAME6 "Good grade (4.0)"
#define PROMPT_NAME7 "More than good grade (4.5)"
#define PROMPT_NAME8 "Very good grade (5.0)"
#define PROMPT_NAME9 "Incorrect number of points!"


int main()
{
        std::cout << PROMPT_NAME1 << std::endl;

	float p;
	std::cout << PROMPT_NAME2;
	std::cout << std::fixed << std::setprecision(1);
	std::cin >> p;
	
	if (p >= 0.0 and p <= 4.4)
	{
		std::cout << PROMPT_NAME3 << std::endl;
	}	
	else if (p >= 4.5 and p <= 5.2)
	{
		std::cout << PROMPT_NAME4 << std::endl;
	}
	else if (p >= 5.3 and p <= 6.2)
        {
                std::cout << PROMPT_NAME5 << std::endl;
        }
	else if (p >= 6.3 and p <= 7.2)
        {
                std::cout << PROMPT_NAME6 << std::endl;
        }
	else if (p >= 7.3 and p <= 8.2)
        {
                std::cout << PROMPT_NAME7 << std::endl;
        }
	else if (p >= 8.3 and p <= 9.0)
        {
                std::cout << PROMPT_NAME8 << std::endl;
        }
	else
	{
		std::cout << PROMPT_NAME9 << std::endl;
	}


	return 0;
}

