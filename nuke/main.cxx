#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1("Texto com mais de vinte e cinco letras.");
	GradeBook gradeBook2("Menos de 25");

	cout
		<< "Primeiro" << gradeBook1.getCourseName()
		<< "Segundo" << gradeBook2.getCourseName()
		<< endl;

	return 0;
}