#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	if (name.length() <= 25) {
		courseName = name;
	}
	else {
		courseName = name.substr(0, 25);
		cout
			<< "Limite de caracteres em 25 " << name << endl;
	}
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout
		<< "Welcome to the grade book for " << getCourseName()
		<< endl;
}
void GradeBook::determineClassAverage() {

	int total;
	int grade;
	int gradeCounter;
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
		<< "Total of all 10 grades is: " << total << endl;
	cout
		<< "Class average is: " << average << endl;
}