#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h"

GradeBook::GradeBook(string name, const int gradesArray[]){
    setCourseName(name);

    for( int grade = 0; grade < students; grade++){
        grades[grade] = gradesArray[grade];
    }
    
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

void GradeBook::outputGrades(){
    cout << "\nThe grades are:\n\n";
    
    for ( int student = 0; student < students; student++){
        cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl; 
    }
}

int GradeBook::getMinimum(){
    int lowGrade{100};

    for(int grade = 0; grade < students; grade++){
        if(grades[grade] < lowGrade)
            lowGrade = grades[grade];
    }
    return lowGrade;
}

int GradeBook::getMaximum(){
    int highGrade{0};

    for ( int grade = 0; grade < students; grade++){
        if(grades[grade] > highGrade)
            highGrade = grades[grade];
    }
    return highGrade;
}

void GradeBook::getAverage(){
    int total{0};

    for (int grade{0}; grade < students; grade++){
        total += grades[grade];
    }
    cout << static_cast<double>(total) / students;
}