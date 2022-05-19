#ifndef EX12_H
#define EX12_H
#include <iostream>
using namespace std;

template <typename T>
class Calc
{
private:
	T a;
	T b;
public:
	Calc() : a(0), b(0) {};
	Calc(T a, T b) {
		this->a = a;
		this->b = b;
	};
	T sum(T a, T b) {
		return a + b;
	};
	T subtract(T a, T b) {
		return a - b;
	};
	T division(T a, T b) {
		return a / b;
	};
	T multiply(T a, T b) {
		return a * b;
	}
	;
	~Calc() {};
};

class Complex {
private:
	double im;
	double re;
public:
	Complex();
	Complex(double re, double im);
	Complex(const Complex& other);
	friend ostream& operator <<(ostream& os, const Complex& other);
	friend Complex operator - (Complex c1, Complex c2);
	friend Complex operator + (Complex c1, Complex c2);
	friend Complex operator * (Complex c1, Complex c2);
	friend Complex operator / (Complex c1, Complex c2);
	friend bool operator != (const Complex &c1, const Complex &c2);
	~Complex();
	
};


#endif
