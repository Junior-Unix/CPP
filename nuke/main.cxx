#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1("Texto inicial do livro");
	GradeBook gradeBook2("Texto secundario para o gradeBook2.");

	cout
		<< "GradeBooks1큦 initial course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2큦 initial course name is: "
		<< gradeBook2.getCourseName()
		<< endl;

	gradeBook1.setCourseName("CS101 C++ Programing");

	cout
		<< "\ngradeBook1큦 course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2큦 course name is: "
		<< gradeBook2.getCourseName()
		<< endl;



	return 0;
}