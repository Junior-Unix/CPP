#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){
    GradeBook gradeBook1 ( " construção 1 " );
    GradeBook gradeBook2 ( " Construção 2 " );

    cout
        << "gradeBook1: " << gradeBook1.getCourseName()
        << "gradeBook2: " << gradeBook2.getCourseName()
        << endl;


    return 0;
}