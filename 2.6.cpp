#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	cout << "请输入两个自然数" << endl;
	cin >> a >> b;
	int c = min(a, b);
	int d = max(a, b);
	for (c; a % c != 0 || b % c != 0; c--);
		cout << "这两个自然数最大公因数为" << c << endl;
	for (d; d % a != 0 || d % b != 0; d++);
		cout << "这两个自然数最小公倍数为" << d << endl;
	return 0;
}