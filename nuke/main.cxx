#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1("Constru��o do gradeBook1");
	GradeBook gradeBook2("Constru��o do gradeBook2");

	cout
		<< "Primeira " << gradeBook1.getCourseName()
		<< "Segunda " << gradeBook2.getCourseName()
		<< endl;

	return 0;
}