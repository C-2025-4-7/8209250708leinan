#include <iostream>
using namespace std;
int main()
{
	float a;
	cout << "请输入数字" << endl;
	cin >> a;
	float b;
	for (b = (a + a / a) / 2; b >= a;);
	for (b ; (b - (b + a / b) / 2) >= 0.00001 || (b - (b + a / b) / 2) <= -0.00001; b=(b + a / b) / 2);
	cout <<"平方根为" << (b + a / b) / 2 << endl;
	return 0;
}