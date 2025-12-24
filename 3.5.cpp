#include <iostream>
using namespace std;
int sum(int a)
{
	int max;
	if (a == 2)
		max = 4;
	else max = (sum(a - 1) + 1) * 2;
	return max;
}
int main()
{
	int n;
	cout << "请输入经过了几天：" << endl;
	cin >> n;
	cout << "第一天摘了" << sum(n) << "个桃子" << endl;
	return 0;
}