#include <iostream>
#include <math.h>
using namespace std;

float R, l, S;
float pi = 3.14;

float toround(float a)
{
return round(a*100)/100;
}


int main()
{
	cout << "Enter the radius: ";
	cin >> R;
	cout << "The length is " << toround(2*pi*R) << endl;
	cout << "The square is " << toround(pi*R*R) << endl;

return 0;
}
