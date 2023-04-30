#include "GradeBook.h"

int main(){

	GradeBook myGradeBook("CS101 C++ PRograming.");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();

	return 0 ;

}
