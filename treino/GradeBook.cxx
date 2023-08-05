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
}

void GradeBook::setCourseName( string name){
    courseName = name;
}

string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}