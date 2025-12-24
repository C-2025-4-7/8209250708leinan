#include <iostream>
using namespace std;
int main()
{
	bool a[100] = { false };
	for (int i = 1; i < 101; i++)
		for (int j = i - 1; j < 100; j = j + i)
			a[j] = !a[j];
	for (int i = 0; i < 100; i++)
		cout << a[i] << '\t' ;
	return 0;
}