#include <iostream>
#include "mytemperature.cpp"
using namespace std;
int main()
{
	double cel1 = 40.0, cel2 = 39.0, cel3 = 31.0, fah1 = 120.0, fah2 = 110.1, fah3 = 30.0;
	cout << "Celsius" << '\t' << "Fahrenheit" << "|" << "Fahrenheit" << '\t' << "Celsius" << endl;
	cout << cel1 << '\t' << celsius_to_fah(cel1) << "|" << fah1 << '\t' << fahrenheit_to_cels(fah1) << endl;
	cout << cel2 << '\t' << celsius_to_fah(cel2) << "|" << fah2 << '\t' << fahrenheit_to_cels(fah2) << endl;
	cout << "..." << '\t' << "..." << "|" << "..." << '\t' << "..." << endl;
	cout << cel3 << '\t' << celsius_to_fah(cel3) << "|" << fah3 << '\t' << fahrenheit_to_cels(fah3) << endl;
	return 0;
}
