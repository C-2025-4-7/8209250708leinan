#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	int a=static_cast<int>(x);
	int b = a - 32;
	int c = a + 1;
	if (a >= 97 && a <= 122)
		cout << static_cast<char>(b) << endl;
	else
		cout << static_cast<char>(c) << endl;
	return 0;
}