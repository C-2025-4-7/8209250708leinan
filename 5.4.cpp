#include <iostream>
#include <iomanip>
using namespace std;
class Student {
public:
	int num, score;
	Student()
	{
		num = 0, score = 0;
	}
	Student(int a, int b)
	{
		num = a, score = b;
	}
	void inform_change(int a,int b)
	{
		num = a, score = b;
	}
};
int max(Student* p)
{
	int a, b, c, d;
	a = (p[0].score > p[1].score ? p[0].score : p[1].score);
	b = (p[2].score > p[3].score ? p[2].score : p[3].score);
	c = (a > b ? a : b);
	d = (c > p[4].score ? c : p[4].score);
	for (int i = 0; i < 5; i++)
		if (p[i].score == d)
			return p[i].num;
}
int main()
{
	Student a[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入 姓名 学号" << endl;
		int x,y;
		cin >> x>>y;
		a[i].inform_change(x, y);
	}
	Student* p = a;
	cout << "成绩最高者学号为" << setw(3) << setfill('0')<< max(a) << endl;
}