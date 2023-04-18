#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	if (name.length() <= 25)
		courseName = name;
	else {
		courseName = name.substr(0, 25);
			cout
				<< "Limitado a 25 caracteres." << name
				<< "Truncado."
				<< endl;
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout
		<< "Welcome."
		<< endl;
}
void GradeBook::determineClassAverage() {
	int total;
	int gradeCounter;
	int grade;
	int average;

	total = 0;
	gradeCounter = 1;

	while (gradeCounter <= 10) {
		cout
			<< "Enter grade: ";
		cin
			>> grade;
		total = total + grade;
		gradeCounter = gradeCounter + 1;
	}

	average = total / 10;

	cout
		<< "\nTotal of all 10 grades is " << total << endl;
	cout
		<< "Class average is " << average << endl;
}


