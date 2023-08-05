#include "GradeBook.h"

int main(){

    int gradesArray[GradeBook::students]{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

    GradeBook myGradeBook("CS101 Introduction to C++ Programing", gradesArray);

    myGradeBook.displayMessage();
    myGradeBook.outputGrades();
    myGradeBook.getMinimum();
    return 0;
}