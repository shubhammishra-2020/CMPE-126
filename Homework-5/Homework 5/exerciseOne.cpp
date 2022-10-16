#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <set>
#include <iterator>

void exerciseOne() {
	set <string> words;
	string text;
	string filename = "testFile.txt";
	int count = 0;

	ifstream file;

	file.open(filename.c_str());

	while (file >> text) {
		words.insert(text);
	}

	set <int> ::iterator it;
	cout << "The elements in the set: " << endl;

	for (auto it = words.begin(); it != words.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;
	file.close();
}