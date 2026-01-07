#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
#include <iomanip>
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << setw(3) << setfill('0') <<num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int a,const char b[], char c)
{
    num = a;
    int i=0;
    for (i; b[i] != '\0'&&i<20; i++)
        name[i] = b[i];
    name[i] = '\0';
    sex = c;
};