#include <iostream>
using namespace std;
int main()
{
	cout << "请输入该三角形的三边" << endl;
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
			cout << "该三角形是等腰三角形" << endl;
		else
			cout << "该三角形不是等腰三角形" << endl;
	}
	else
		cout << "不存在该三角形" << endl;
	return 0;
}