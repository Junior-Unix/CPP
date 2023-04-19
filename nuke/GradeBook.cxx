#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

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
			<< "Limite de 25 caracteres: " << name << endl;
	}
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout
		<< "Welcome to the grade book for " << getCourseName() << endl;
}
void GradeBook::determineClassAverage() {

	int total;
	int grade;
	ing gradeCounter;
	double average;

	total = 0;
	gradeCounter = 0;

	cout
		<< "Enter grade: ";
	cin
		>> grade;

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout
			<< "Enter grade: ";
		cin
			>> grade;
	}

	if (gradeCounter != 0) {
		average = static_cast<double>(total) / gradeCounter;

		cout
			<< "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
		cout
			<< "Class average is " << setprecision(2) << fixed << average << endl;
	}
	else
		cout
		<< "No grades were entered" << endl;
}
