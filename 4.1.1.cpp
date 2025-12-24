#include <iostream>
using namespace std;
int main()
{
	cout << "请输入10个数字：" ;
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int b[10] = {0};
	cout << "未重复数字为：" ;
	for (int i = 0; i < 10; i++)
	{
		bool norepeat =true ;
		for (int n = 0; n <= i; n++)
		{
			if (a[i] == b[n])
			{
				norepeat = false;
				break;
			}
		}
		if (norepeat)
		{
			b[i] = a[i];
			cout << b[i] << '\t';
		}
	}
	;
}