#include <iostring>
using std::string;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	if (name.lenght() <= 25) {
		courseName = name;
	}
	if (name.length() > 25) {
		courseName = name.substr(0, 25);
		cout
			<< "Name" << name
			<< "Limite courseName to first 25 characters.\n"
			<< endl;
	}
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout
		<< "Welcome! " << getCourseName()
		<< endl;
}