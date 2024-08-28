/* Program 4b. Chessboard
Write a program that accepts an integer 'size'. Then, using a for loop, the program draws a checkerboard of the given size. Please draw a checkerboard using double space \" \" and double grid \"##\".*/



#include <iostream>

#define PROMPT_NAME1 "This is the program that accepts an integer 'size'. Then, using a for loop, the program draws a checkerboard of the given size. Please draw a checkerboard using double space \" \" and double grid \"##\"."
#define PROMPT_NAME2 "Enter a size: "


int main()
{
	std::cout << PROMPT_NAME1 << std::endl;

	int size;
	std::cout << PROMPT_NAME2;
	std::cin >> size;

	for (int row = 0; row < size; ++row)
	{
		for (int col = 0; col < size; ++ col)
		{
			if((row + col)%2 == 0) std::cout << "##";
			else std::cout << "  ";
		}
	std::cout << std::endl;
	}

	return 0;
}
