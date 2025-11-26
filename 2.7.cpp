#include <iostream>
using namespace std;
int main()
{
	int a=5;
	for (int b = 1; b <= a; b++)
	{
		for (int c = 1; c <= b; c++)
			cout << "*";
			cout  << endl;
	}
	return 0;
}