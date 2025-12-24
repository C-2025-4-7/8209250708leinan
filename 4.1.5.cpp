#include <iostream>
#define Max_size 100
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int x;
	int* p = &x;
	if (s1[0] == '\0')
		cout << "indexOf(¡°" << s1 << "¡±, ¡°" << s2 << "¡±) is 0";
	else for (int i = 0; s2[i] != '\0'; i++)
		{
			bool match = true;
			int s1_len = 0;
			while (s1[s1_len] != '\0') 
			{
				s1_len++;
			}
			if (s2[i] != '\0')
				for (int j = 0; j < s1_len; j++)
					if (s2[i + j] == '\0' || s1[j] != s2[i + j])
					{
						match = false; break;
					}
			if (match)
			{
				*p = i; break;
			}
			else *p = -1;			
		}
	return x;
}
int main()
{
	char a[Max_size], b[Max_size];
	cout << "Enter the first string:";
	cin.getline(a, Max_size);
	cout << "Enter the second string:";
	cin.getline(b, Max_size);
	cout<< "indexOf(¡°" << a << "¡±, ¡°" << b << "¡±) is "<<indexOf(a,b);
}