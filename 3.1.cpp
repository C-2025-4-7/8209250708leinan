#include <iostream>
using namespace std;
int main()
{
	int a[10];
	cout << "请输入十个数字：";
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	int b[10]={0}, count = 0;
	for (int i = 0; i < 10; i++)
	{
		bool repeat = false;
		for (int j = 0; j <= count; j++)
		
			if (a[i] == b[j])
			{
				repeat = true;
				break;
			}
		if (!repeat)
		{
			b[count] = a[i];
			count++;
		}
	}
	cout << "不同的数字为：";
	for (int i = 0; i < count; i++)
		cout << b[i];
	return 0;
}
