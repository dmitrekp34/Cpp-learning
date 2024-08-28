/*Program 3d. Factorial
Write a program that uses a loop to calculate the factorial of a given integer N. The program checks that the given N is correct and prints the message \"N must be non-negative\" if the value is incorrect.*/

#include <iostream>

#define PROMPT_NAME1 "This is a program that uses a loop to calculate the factorial of a given integer N. The program checks that the given N is correct and prints the message \"N must be non-negative\" if the value is incorrect."
#define PROMPT_NAME2 "Write a number: "
#define PROMPT_NAME3 "N must be non-negative"
#define PROMPT_NAME4 "! = 1"
#define PROMPT_NAME5 "! = "

int main()
{
	std::cout << PROMPT_NAME1 << std::endl;
	std::cout << PROMPT_NAME2;
	int N;
	std::cin >> N;

	if (N < 0) std::cout << PROMPT_NAME3 << std::endl;
	else if (N == 0) std::cout << N << PROMPT_NAME4 << std::endl;
	else
	{
		int f = 1;
		for (int i = 1; i < N + 1; ++i)
		{
			f *= i;
		}

		std::cout << N << PROMPT_NAME5 << f << std::endl;
	}
	return 0;
}
