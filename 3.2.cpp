#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	bool a;
	for (i = 2; i < num; i++)
		if (num % i == 0) break;
	i >= num ? a=true:a=false;
	return a;
}
int main()
{
	int i , m;
	for (i = 2,m = 0; m <= 199; i++)
		if (is_prime(i)==1)
		{
			++m;
			cout << i << '\t';
			if (m % 10 == 0)
			{
				cout << endl;
			}
		};
	return 0;
}