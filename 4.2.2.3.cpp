#include <iostream>
#include <utility>
using namespace std;
void sort(int list[],int listSize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	int n;

	cout << "请输入元素个数：";
	cin >> n;
	int* p;
	p = new int[n];
	cout << "请输入元素：";
	for (int i=0; i < n; i++)
		cin >> p[i];
	for (int i=0; i < n; i++)
		cout <<"第"<<i+1<<"个指针指向的地址和对应元素分别为："<< &p[i] << '\t' << p[i] << endl;
	sort(p, n);
	cout << "排序后" << endl;
	for (int i=0; i < n; i++)
		cout << "第" << i + 1 << "个指针指向的地址和对应元素分别为：" << &p[i] << '\t' << p[i] << endl;
	delete[]p;
}