#include <iostream>
using namespace std;
int maxy(int  num1, int num2)
{
	int n = (num1 < num2) ? num1 : num2;
	for (n; n > 0; n--)
		if ((num1 % n == 0) && (num2 % n == 0))
			break;
	return n;
}
int minb(int  num1, int num2)
{
	int n = (num1 > num2) ? num1 : num2;
	for (n;; n++)
		if ((n % num1  == 0) && (n % num2 == 0))
			break;
	return n;
}
int main()
{
	int m, n;
	cout << "请输入两个数字：";
	cin >> m>> n;
	cout << "它们的最大公因数为：" << maxy(m, n) << endl;
	cout << "它们的最小公倍数为：" << minb(m, n) << endl;
	return 0;
}
