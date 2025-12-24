#include <iostream>
#define Max_size 100
using namespace std;
void count(const char s[], int counts[])
{
	int size_s=0;
	for (int i = 0; s[i] != '\0'; i++)
		size_s++;	//计算字符串长度
	char simple[52];
	for (int i = 0; i < 26; i++)
		simple[i] = 65 + i;
	for (int i = 0; i < 26; i++)
		simple[i+26] = 97 + i;		//建立一个包含26个英文字母大小写的数组当样本
	for (int i = 0; i < size_s; i++)
		for (int j = 0;j<26; j++)
			if (s[i] == simple[j] || s[i] == simple[j + 26])
				counts[j]++;		//对每个字母进行计数
	for(int i=0;i<26;i++)
	{
		if(counts[i]!=0)
		{
			cout << simple[i + 26] << ":" << counts[i] << "time";
			if (counts[i] > 1)
				cout << "s";
			cout << endl;
		}
	}
}
int main()
{
	cout << "请输入：";
	char sentence[Max_size];
	int sum[26] = {0};
	cin.getline(sentence, Max_size);
	count(sentence, sum);
}