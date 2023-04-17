#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


int main() {

	GradeBook gradeBook1("teste de que a variaval name tem menos de 25 usando ternários");

	cout << "Ternarios com menos de 25 characters." << gradeBook1.getCourseName()
		<< endl;

	return 0;
}