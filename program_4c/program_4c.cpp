/*Program 4c. Fine
Write a program that retrieves an integer indicating the exceeded speed relative to the applicable limit. The program, using the conditional instruction \"switch-case\", provides (displays on the screen) the amount of the fine imposed for the offense due to speeding according to the following scheme:\n0 ... 10 - 50 zlotys,\n11 ... 20 - 100 zlotys,\n21 - 110 zlotys\n,22 - 120 zlotys,\n23, 27 and 29 – PLN 140,\n24, 25 and 28 – PLN 150,\n26 - 145 zlotys,\n30 or more - 200 zlotys. */



#include <iostream>

#define PROMPT_NAME1 "This is the program that retrieves an integer indicating the exceeded speed relative to the applicable limit. The program provides (displays on the screen) the amount of the fine imposed for the offense due to speeding."
#define PROMPT_NAME2 "How much was the speed limit exceeded? "
#define PROMPT_NAME3 " zlotys."

int main()
{
	std::cout << PROMPT_NAME1 << std::endl;

	int over;
	std::cout << PROMPT_NAME2;
	std::cin >> over;

	switch (over)
	{
		case 0 ... 10:
			std::cout << 50 << PROMPT_NAME3 << std::endl;
			break;

		case 11 ... 20:
			std::cout << 100 << PROMPT_NAME3 << std::endl;
			break;

		case 21:
                        std::cout << 110 << PROMPT_NAME3 << std::endl;
                        break;

		case 22:
                        std::cout << 120 << PROMPT_NAME3 << std::endl;
                        break;

		case 23: case  27: case 29:
                        std::cout << 140 << PROMPT_NAME3 << std::endl;
                        break;

		case 24: case  25: case 28:
                        std::cout << 150 << PROMPT_NAME3 << std::endl;
                        break;

		case 26:
                        std::cout << 145 << PROMPT_NAME3 << std::endl;
                        break;

		default:
                        std::cout << 200 << PROMPT_NAME3 << std::endl;
                        break;
	
	}



	return 0;
}
