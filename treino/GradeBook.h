#include <string>
using std::string;

class GradeBook{
public:

    const static int students{10};

    GradeBook(string, const int[]);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void outputGrades();
    int getMinimum();
    int getMaximum();
    void getAverage();

private:

    string courseName;
    int grades[students];

};