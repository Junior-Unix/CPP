#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Power.h"

void Pot::power(){

	int y;
	int x;
	int i;
	int power;

	i = 1;
	power = 1;

	cout
		<< "Enter base as an integer: ";
	cin
		>> x;

	cout
		<< "Enter exponent as an integer: ";
	cin
		>> y;

	while(i <= y){
		power *= x;
		i++;
	}	

	cout
		<< power << endl;
}
