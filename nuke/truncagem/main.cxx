#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1("Teste de truncagem da variavel name com mais de 25 characters.");


	cout
		<< "Truncagem: " << gradeBook1.getCourseName()
		<< endl;


	return 0;
}