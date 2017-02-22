#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string word;
	ifstream inFile;

	inFile.open("Lab5.txt");
	if (inFile.fail()) {
		cout << "ERROR: Could not open the file!";
	}
	while (inFile >> word) {
		cout << word << endl;
	}

	system("pause");
}