/*Лабораторна робота №1
 * Програма 1є:
 *Напишіть програму для розрахунку простих відсотків для конкретного клієнта банку для заданої суми P (плаваючого типу), періоду позики T (int) і процентної ставки R (плаваючої). Результатом є значення виразу I = (P * T * R )/100. Виведіть результат і як float, і як int. Відобразіть результат як дійсне значення з точністю до двох знаків після коми.
*/

#include <iostream> 
#include <math.h>
//using namespace std;
#define PROMPT_NAME1 "Уведіть квоту: "
#define PROMPT_NAME2 "Уведіть період кредитування: "
#define PROMPT_NAME3 "Уведіть процентну ставку: "
#define PROMPT_NAME4 "Дійсний результат: "
#define PROMPT_NAME5 "Цілий результат: "

float toround1(float a)
{
	return round(a);
}

float toround2(float a)
{
        return round(a*100)/100;
}


int main()
{
	float P, R, I;
	int T;
	std::cout << PROMPT_NAME1;
	std::cin >>  P;
	std::cout << PROMPT_NAME2;
	std::cin >> T;
	std::cout << PROMPT_NAME3;
	std::cin >> R;	
	I = (P*T*R)/100;
	std::cout << PROMPT_NAME4 <<toround2(I) <<std::endl;
	std::cout << PROMPT_NAME5 << toround1(I) << std::endl;

	return 0;
}

