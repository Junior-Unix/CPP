#include <string>
using std::string;

class GradeBook {
private:
	string courseName;
public:
	GradeBook(string);
	void setGcourseName(string);
	string getCourseName();
	void displayMessage();
};