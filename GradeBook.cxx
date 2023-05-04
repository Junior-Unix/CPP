#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h"

GradeBook::GradeBook(string name){
	setCourseName(name);
	aCount = 0;
	bCount = 0;
}
void GradeBook::setCourseName(string name){
	if(name.length() <= 25){
		courseName = name;
	}else{
		courseName = name.substr(0, 25);

		cout
			<< "Name " << name << " exceed maximum length (25)."
			<< "Limiting courseName to 25 first characters.\n"
			<< endl;
	}
}
string GradeBook::getCourseName(){
	return courseName;
}
void GradeBook::displayMessage(){
	cout
		<< "Welcome to the grade book for " << getCourseName()
		<< endl;
}
void GradeBook::determineClassAverage(){
	int total;
	int grade;
	int gradeCounter;
	int average;

	total = 0;
	gradeCounter = 0;

	cout
		<< "Enter grade or -1 to quit.";
	cin
		>> grade;

	while(grade != -1){
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout
			<< "Enter grade or -1 to quit.";
		cin
			>> grade;

	}

	if(gradeCounter != 0){
		average = static_cast<double>(total) / gradeCounter;

		cout
			<< "Total of all " << gradeCounter << "grades entered is "
			<< total << endl;
		cout
			<< "Class average is " << setprecision(2) << fixed << average
			<< endl;
	}else{
		cout
			<< "No grades were entered."
			<< endl;
	}
}
void GradeBook::inputGrades(){

	int grade;

	cout
		<< "Enter the letter grades." 
		<< endl
		<< "Enter the EOF character to end input."
		<< endl;

	while((grade = cin.get()) != EOF){
		switch(grade){
			case 'A':
			case 'a':
				aCount++;
				break;
			case 'B':
			case 'b':
				bCount++;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout
					<< "Incorrect letter grade entered."
					<< "Enter a new grade."
					<< endl;
				break;
		
		}
	}
}
void GradeBook::displayGradeReport(){
	cout
		<< "Number of students who received each letter grade:"
		<< "\nA: " << aCount
		<< "\nB: " << bCount
		<< endl;

}
