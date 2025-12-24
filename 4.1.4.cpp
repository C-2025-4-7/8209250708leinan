#include <iostream>
#include <utility>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
int main()
{
	cout << "Enter list1:";
	int x, y;
	cin >> x;
	int a[80],b[80],c[80];
	for (int i = 0; i < x; i++)
		cin >> a[i];
	cout << "Enter list2:";
	cin >> y;
	for (int i = 0; i < y; i++)
		cin >> b[i];
	merge(a, x, b, y, c);
	for (int i = 0; i < x + y; i++)
		cout << c[i] << '\t';
	return 0;
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int i = 0; i < size2; i++)
		list3[i + size1] = list1[i];
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size1+size2-1; j++)
			if (list3[j] > list3[j + 1])
			{
				swap (list3[j] ,list3[j + 1]);
				changed = true;
			}
	} while (changed);
}