#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a=2;
	int b,d;
	for (b = a; b > a;);
	for (b; (2 * b - 2) <= 100;b=2*b);
	d = log(b) / log(2);
	float y = (2 * b - 2) * 0.8 / d;
	cout << "每天平均花" << y << "元" << endl;
	return 0;

}