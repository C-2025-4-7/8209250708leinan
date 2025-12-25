#include <iostream>
#include <utility>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
int main()
{
	cout << "Enter list1:";
	int x, y;
	cin >> x;
	int a[80],b[80],c[160];
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
    int i = 0;  // list1的索引
    int j = 0;  // list2的索引
    int k = 0;  // list3的索引
    int comparisons = 0;  // 比较次数计数

    // 合并两个有序数组
    while (i < size1 && j < size2)
    {
        comparisons++;  // 每次比较计数
        if (list1[i] <= list2[j])
        {
            list3[k++] = list1[i++];
        }
        else
        {
            list3[k++] = list2[j++];
        }
    }

    // 复制list1剩余的元素
    while (i < size1)
    {
        list3[k++] = list1[i++];
    }

    // 复制list2剩余的元素
    while (j < size2)
    {
        list3[k++] = list2[j++];
    }
}
