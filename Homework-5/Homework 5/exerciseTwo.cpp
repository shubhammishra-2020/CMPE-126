#include <iostream>
#include <map>
#include <string>
using namespace std;

void exerciseTwo() {
	string input;
	map<string, int> courseRoom = { {"CS101", 3004}, {"CS102", 45001}, {"CS103", 6755}, {"NT110", 1244}, {"CM241", 1411} };
	map<string, string> courseInstructor = { {"CS101", "Haynes"}, {"CS102", "Alvarado"}, {"CS103", "Rich"}, {"NT110", "Burke"}, {"CM241", "Lee"} };
	map<string, string> courseTime = { {"CS101", "8:00 am"}, {"CS102", "9:00 am"}, {"CS103", "10:00 am"}, {"NT110", "11:00 am"}, {"CM241", "1:00 pm"} };

	cout << "Enter course number" << endl;
	cin >> input;

	if (courseRoom.count(input) && courseInstructor.count(input) && courseTime.count(input)) {
		cout << "Room number: " << courseRoom.at(input) << endl;
		cout << "Course Instructor: " << courseInstructor.at(input) << endl;
		cout << "Course Time: " << courseTime.at(input) << endl;
	}


}