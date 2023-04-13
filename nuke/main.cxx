#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main() {

	GradeBook gradeBook1("Texto com mais de vinte e cinco palavras para gradeBook1.");
	GradeBook gradeBook2("Texto com menos de 25 letras.");

	cout
		<< "Primeiro: " << gradeBook1.getCourseName()
		<< "Segundo : " << gradeBook2.getCourseName()
		<< endl;

	return 0;
}