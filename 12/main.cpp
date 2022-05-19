#include "Ex12.h"

int main() {
	setlocale(0, "");
	int i1=4, i2=2;
	Calc<int> CL1(i1, i2);
	cout << CL1.division(i1, i2) << endl;
	Complex c1(1, 2), c2(2, -3);
	Calc<Complex> CL2(c1, c2);
	cout << CL2.subtract(c1, c2) << endl;
	double d1=1.2, d2=-3.2;
	Calc<double> CL3(d1, d2);
	cout << CL3.multiply(d1, d2) << endl;
	string s1 = "1", s2 = "23";
	Calc<string> CL4(s1, s2);
	cout << CL4.sum(s1, s2) << endl;
}