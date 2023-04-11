#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){

    GradeBook gradeBook1( "Construção do gradeBook1: ");
    GradeBook gradeBook2( "Construção do gradeBook2: ");

        cout
            << "Primeiro texto: " << gradeBook1.getCourseName()
            << "Segundo texto: " << gradeBook2.getCourseName()
            << endl;



    return 0;
}