#include <string>
using std::string;

class GradeBook{
	public:
		GradeBook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
		void determineClassAverage();
		void inputGrades();
		void displayGradeReport();
	private:
		string courseName;
		int aCount;
		int bCount;
};
