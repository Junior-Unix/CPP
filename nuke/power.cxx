#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){

	int x; //base da potencia.
	int y; //expoente.
	int i; //conta de 1 a y.
	int power; //utilizado para calcular x elevado à potência de y
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

	while ( i <= y ){
		power *= x;
		i++;
	}

	cout
		<< power << endl;

	return 0;
}
