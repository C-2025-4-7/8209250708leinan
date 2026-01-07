#include<iostream>
using namespace std;
class Time             // 定义Time类
{           
private:	// 数据成员为私有的
	int hour;
	int minute;
	int sec;
public:
	void setTime()
	{
		int a, b, c;
		cout << "请输入 时 分 秒" << endl;
		cin >> a >> b >> c ;
		if ((0 <= a < 24) && (0 <= b < 60) && (0 <= c < 60))
			hour = a, minute = b, sec = c;
		else
			cout << "时间输入错误" << endl;
	}
	void display()
	{
		cout<< hour << ":" << minute << ":" << sec <<endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.setTime();     //输入设定的时间 
	t1.display();
	return 0;
}