#include <iostream>
using namespace std;
int maxgys(int a, int b)
{
	int c;
	for (int i = (a < b) ? a : b; (a % i != 0) || (b % i != 0); i--)
		c=i-1;
	return c;
}
int mingbs(int a, int b)
{
	int c;
	for (int i = (a > b) ? a : b; ( i % a != 0) || ( i % b != 0); i++)
		c = i+1;
	return c;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << maxgys(m, n) << '\t' << mingbs(m, n) << endl;
	return 0;
}