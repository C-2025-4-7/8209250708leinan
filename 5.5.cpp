#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point()
	{
		x = 0, y = 0;
	}
	Point(int i, int j)
	{
		x = i, y = j;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "该点坐标为"<<"(" << x << "," << y << ")"<<endl;
	}
};
int main()
{
	Point p1(60, 80);
	p1.display();
	int a, b;
	cout << "请输入坐标的更改值" << endl;
	cin >> a >> b;
	p1.setPoint(a, b);
	cout << "更改后，";
	p1.display();
}