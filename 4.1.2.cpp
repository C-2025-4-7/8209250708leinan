#include <iostream>
#include <utility>
using namespace std;
void sort(double (& list)[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j],list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	double a[10];
	cout << "请输入数字：";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	sort(a);
	cout << "排序后为：";
	for (int i = 0; i < 10; i++)
		cout << a[i] << '\t';
	return 0;
}