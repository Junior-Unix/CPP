#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	name.length() <= 25 ? courseName = name : courseName = name.substr(0, 25);

	cout
		<< "Limit to 25 characters." << name
		<< endl;
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout
		<< "Welcome."
		<< endl;
}