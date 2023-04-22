#include <iosream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed; //Assegura que o ponto de fração decimal seja exibido.

#include <iomanip>
using std::setprecision; //Configura a precisão da saída numérica.

#include "GradeBook.h"

GradeBook::GradeBook(string name){
	setCOurseName(name);
}
void GradeBook::setCourseName(string name){
	if(name.length() <= 10){
		courseName = name;
	}
	else{
		courseName = name.substr(0, 25);

		cout
			<< "Name " << name << " " << "exceeds maximum length (25).\n"
			<< "Limit courseName to first 25 characters.\n" << endl;
	}
}
string GradeBook::getCourseName(){
	return courseName;
}
void GradeBook::displayMessage(){
	cout
		<< "Welcome to the grade book for\n" << getCourseName() << "!\n"
		<< endl;
}
void GradeBook::determineClassAverage(){
	
	int total;
	int grade;
	int gradeCounter;
	double average;

	total = 0;
	gradeCounter = 0;

	cout
		<< "Enter grade or -1 to quit: ";
	cin
		>> grade;

	while(gradeCounter != -1){
		
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout
			<< "Enter grade or -1 to quit: ";
		cin
			>> grade;	
	}
	if(gradeCounter != 0){
		average = static_cast< double >(total) / gradeCounter;

		cout
			<< "Total of all " << gradeCounter << "grades entrie is: "
			<< total << endl;
		cout
			<< "Class average is: " << setprecision(2) << fixed << average << endl;
	}
	else{
		cout
			<< "No grades were entried" << endl;
	}
}
