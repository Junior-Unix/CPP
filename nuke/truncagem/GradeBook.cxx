#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	cout 
		<< (name.length() <= 25 
			? courseName = name 
			: courseName = name.substr(0, 25)
			);
	/*ou
	name.length() <=25 
	? cout << courseName = name 
	: cout courseName = name.substr(0, 25);
	*/

	cout
		<< "\nLimit to 25 characters. " << name
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