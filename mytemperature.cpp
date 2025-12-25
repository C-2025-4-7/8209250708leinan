#include "mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)
{
	double fah =cel  * 9 / 5 + 32.0;
	return fah;
}
//摄氏温度到华氏温度
double fahrenheit_to_cels(double fah)
{
	double cel = (fah - 32) * 5 / 9.0;
	return cel;
}
//华氏温度到摄氏温度