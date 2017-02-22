#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void seekanddestroy(vector<string> v) {
	string first;
	string second;
	cout << "Enter the word you are searching to replace:";
	cin >> first;
	cout << "Enter the word you want to replace the first word by:";
	cin >> second;
	
	for (int i = 0; i < v.size();i++) {
		if (v[i] == first) {
			swap(v[i], second);
		}
	}
}

void display(vector<string> v) {
	for (int i = 0;i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}

int main() {
	//initialize the variables
	vector<string> wordvect;
	string word;
	ifstream inFile;
	
	//open file and read to word
	inFile.open("Lab5.txt");
	if (inFile.fail()) {
		cout << "ERROR: Could not open the file!";
	}

	//add word to word vector
	while (inFile >> word) {
		wordvect.push_back(word);
	}

	//printout function to print out elements of wordvect
	display(wordvect);

	//search for a word and replace it
	seekanddestroy(wordvect);

	system("pause");
}