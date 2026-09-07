#pragma once
class Drib {
private:
	int _chiselnik;
	int _znamennuk;
public:
	Drib(int chiselnik, int znamennuk) {
		_chiselnik = chiselnik;
		_znamennuk = znamennuk;
	}
	void Print() const;
	Drib operator+(const Drib& other) const;
	Drib operator-(const Drib& other) const;
	Drib operator*(const Drib& other) const;
	Drib operator/(const Drib& other) const;

};


class Complex {
private:
	double _a;
	double _b;
public:
	Complex(double a, double b) {
		_a = a;
		_b = b;

	}
	void Print() const;
	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;
};
