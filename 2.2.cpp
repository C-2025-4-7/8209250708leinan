#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "请输入大于0小于10的数" << endl;
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x < 1)
			y = 3 - 2 * x;
		else
			if (x < 5)
				y = 2 / (4 * x) + 1;
			else
				y = x * x;
		cout << y << endl;
	}
	else
		cout << "不满足条件" << endl;
		return 0;
}