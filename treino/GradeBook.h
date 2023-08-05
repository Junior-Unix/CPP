#include <string>
using std::string;

class GradeBook{
public:

    const static int students{10};

    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();

private:

    string courseName;
};