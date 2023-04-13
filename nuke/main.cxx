#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


int main() {
	GradeBook gradeBook1("Primeiro");
	GradeBook gradeBook2("Segundo");

	cout
		<< "gradeBook1:" << gradeBook1.getCourseName()
		<< "gradeBook2:" << gradeBook2.getCourseName()
		<< endl;

	return 0;
}