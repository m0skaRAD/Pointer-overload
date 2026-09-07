using namespace std;
#include "drib.h"
#include <iostream>

void skorochena(int& ch, int& zn) {
	int x = ch;
	int y = zn;
	while (y != 0) {
		int temp = y;
		y = x % y;
		x = temp;
	}
	ch /= x;
	zn /= x;
}

Drib Drib::operator+(const Drib& other) const
{
	int new_ch = _chiselnik * other._znamennuk + other._chiselnik * _znamennuk;
	int new_zn = _znamennuk * other._znamennuk;

	skorochena(new_ch, new_zn);
	return Drib(new_ch, new_zn);
}
Drib Drib::operator-(const Drib& other) const
{
	int new_ch = _chiselnik * other._znamennuk - other._chiselnik * _znamennuk;
	int new_zn = _znamennuk * other._znamennuk;

	skorochena(new_ch, new_zn);
	return Drib(new_ch, new_zn);
}
Drib Drib::operator*(const Drib& other) const
{
	int new_ch = _chiselnik * other._chiselnik;
	int new_zn = _znamennuk * other._znamennuk;

	skorochena(new_ch, new_zn);
	return Drib(new_ch, new_zn);
}
Drib Drib::operator/(const Drib& other) const
{
	if (other._chiselnik == 0) {
		cout << "Error - ";
		Drib(-0, -0);
		
	}

	int new_ch = _chiselnik * other._znamennuk;
	int new_zn = _znamennuk * other._chiselnik;

	skorochena(new_ch, new_zn);
	return Drib(new_ch, new_zn);
}
void Drib::Print() const{
	cout << _chiselnik << "/" << _znamennuk << endl;
}




void Complex::Print() const
{
	if (_b >= 0) {
		cout << _a << "+" << _b << "i" << endl;
	}
	else {
		cout << _a << "-" << _b << "i" << endl;
	}
}

Complex Complex::operator+(const Complex& other) const
{
	return Complex(_a+other._a,_b+other._b);
}
Complex Complex::operator-(const Complex& other) const
{
	return Complex(_a-other._a,_b-other._b);
}

Complex Complex::operator*(const Complex& other) const
{
	double new_a = (_a * other._a) - (_b * other._b);
	double new_b = (_a * other._b) + (_b * other._a);
	return Complex(new_a, new_b);
}

Complex Complex::operator/(const Complex& other) const
{
	double zn = (other._a * other._a) + (other._b * other._b);

	double new_a = ((_a * other._a) + (_b * other._b)) / zn;
	double new_b = ((_b * other._a) - (_a * other._b)) / zn;

	return Complex(new_a, new_b);
}




