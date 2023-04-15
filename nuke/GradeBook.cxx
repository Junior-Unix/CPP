#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setGcourseName(string name) {
	if (name.length() <= 25) {
		courseName = name;
	}
	if (name.length() > 25) {
		courseName = name.substr(0, 25);

		cout
			<< "Name \"" << name << "\" exceed maximum length (25).\n"
			<< "Limitng courseName to first 25 characters.\n"
			<< endl;
	}
}
string GradeBook::getCourseName() {
	return coursename;
}
void GradeBook::displayMessage() {
	cout
		<< "Welcome to the grade book for\n" << getCOurseName() "!"
		<< endl;
}