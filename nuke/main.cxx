#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){

    GradeBook gradeBook1( " Construtor 1 " );
    GradeBook gradeBook2( "  Construtor 2 ");

        cout 
            << " Texto 1: " << gradeBook1.getCourseName()
            << " Texto 2: " << gradeBook2.getCourseName()
            << endl;

    return 0;
}