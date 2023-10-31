#include <iostream>
#include <math.h>
using namespace std;


void func(float &x)
{
	x = (x > 0) ? x * 2 : -x;
}

int main()
{
	float x;
	cout << "Введите x " << endl;
	cin >> x;
	func(x);
	cout << x << endl;
	return 0;
}