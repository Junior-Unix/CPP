#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1(" texto com mais de vinte e cinco caracteres.");
	GradeBook gradeBook2("segunda");

	cout << "Texto 1" << gradeBook1.getCourseName()
		<< "Texto 2 " << gradeBook2.getCourseName()
		<< endl;

	return 0;
}