#include <iostream>
using std::cout;
using std::endl;

int main() {

	int num = 0;

	for (int i = 0; i < 1000000000000 ; i++) {
		num++;
		cout << num << endl;
	}
	cout << "fertig!" << endl;


	return 0;
}