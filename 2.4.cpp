#include <iostream>

using namespace std;

int main()
{
	int a, b,c;
	char fuhao;
	cout << "请输入计算式（数字1	计算符	 数字2）" << endl;
	cin >> a >> fuhao >> b;
	switch (fuhao)
	{
	case '+':
	{
		c = a = +b;
		cout << c << endl;
	}
	case '-':
	{
		c = a - b;
		cout << c << endl;
	}
	case '*':
	{
		c = a * b;
		cout << c << endl;
	}
	case '/':
	{
		if (b != 0)
		{
			c = a / b;
			cout << c << endl;
		}
		else
			cout<<"除数不该为零" << endl;
	}
	case '%':
	{
		if (b != 0)
		{
			c = a%b;
			cout << c << endl;
		}
		else
			cout<<"除数不该为零" << endl;
	}
	default:
		cout<<"计算符非法" << endl;
	}
	return 0;
}