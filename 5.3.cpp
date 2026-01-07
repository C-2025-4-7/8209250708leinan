#include <iostream>
using namespace std;
class long_zhu {
private:
	float Long, Width, Height;
public:
	long_zhu()
	{
		cout << "请输入 长 宽 高（长须大于宽）" << endl;
		float a, b, c;
		cin >> a >> b >> c;
		if (a > b)
			Long = a, Width = b, Height = c;
		else
			cout << "该输入违反规范" << endl;
	}
	float get_volume()
	{
		float volume = Long * Width * Height;
		return volume;
	}
};
int main()
{
	long_zhu L1;
	cout << L1.get_volume() << endl;
	long_zhu L2;
	cout << L2.get_volume() << endl;
	long_zhu L3;
	cout << L3.get_volume() << endl;
	return 0;
}