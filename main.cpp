#include <iostream>
#include "drib.h"
using namespace std;

int main()
{
	//Drib d1(3, 2);
	//Drib d2(4, 5);
	//
	//Drib d3 = d1 + d2;
	//Drib d4 = d2 - d1;
	//Drib d5 = d1 * d2;
	//Drib d6 = d1 / d2;

	//d3.Print();
	//d4.Print();
	//d5.Print();
	//d6.Print();

	Complex c1(2, 5);
	Complex c2(6, 3);

	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;
	Complex c5 = c1 * c2;
	Complex c6 = c1 / c2;

	c3.Print();
	c4.Print();
	c5.Print();
	c6.Print();
}
