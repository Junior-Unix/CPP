#include <string>
using std::string;

class GradeBook{
public:

    const static int students{10};

    GradeBook(string);
    void setGradeBook(string);
    string getGradeBook();
    void displayMessage();

private:

    string courseName;
};