#include <iostream>
using namespace std;
int pow(int a, int b)
{
	if (b == 0)
		return 1;
	else if (b == 1)
		return a;
	else
		return a*pow(a, b - 1);
}
int parseHex(const char* const hexString)
{
	char simple[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };	//建立样本以匹配每位上的数字
	int size_hexString = 0;
	for (int i = 0; hexString[i] != '\0'; i++)
		size_hexString++;	//计算字符串长度
	int* num;
	num = new int[size_hexString];
	for (int i = 0; i < size_hexString; i++)
		for (int j = 0; j < 16; j++)
			if (hexString[i] == simple[j])
			{
				num[size_hexString - i - 1] = j;
				break;
			}		//获取十六进制数每位上数字大小
	int sum=0;
	for (int i = 0; i < size_hexString; i++)
		sum += num[i] * (pow(16, i));
	delete[]num;
	return sum;
}
int main()
{
	char num_HEX[100];
	cout << "请输入十六进制数（最大100位,并使用大写）：";
	cin.getline(num_HEX, 100);
	cout << "对应十进制数为："<< parseHex(num_HEX);
}