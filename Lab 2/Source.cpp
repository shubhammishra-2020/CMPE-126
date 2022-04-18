#include <iostream>
using namespace std;

void switchOperands(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void enterArrayData(int* ptr) {
	cout << "Enter 10 elements: " << endl;
	for (int i = 0; i < 10; i++) {
		cin >> ptr[i];
	}
}

void outputArrayData(int* ptr) {
	cout << "The array is: ";
	for (int i = 0; i < 10; i++) {
		cout << ptr[i] << " ";
	}
	cout << endl;
}

void sumArray(int* ptr) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = ptr[i] + sum;
	}
	cout << "Sum of Array is: " << sum << endl;
}
void partTwo() {
	int arr[10];
	enterArrayData(arr);
	outputArrayData(arr);
	sumArray(arr);
}

template <typename myType> 
myType partThree(myType *arrPtr) {
	myType temp[10];
	for (int i = 0; i < 10; i++) {
		temp[i] = arrPtr[10 - i - 1];
	}
	for (int i = 0; i < 10; i++) {
		arrPtr[i] = temp[i];
	}
	return *arrPtr;
}

int main() {
	int option;
	cout << "1. Run Part 1" << endl;
	cout << "2. Run Part 2" << endl;
	cout << "3. Run Part 3" << endl;
	cout << "4. Exit" << endl;
	cin >> option;
	int c[10] = { 1,2,3,4,5,6,7,8,9,10};

	switch (option) {
	case 1:
		int a; int b;
		a = 1;
		b = 2;
		switchOperands(&a, &b);
		cout << "Switched: " << a << " " << b;
		break;
	case 2:
		partTwo();
		break;
	case 3:
		cout << "Initial Order: ";
		for (int i = 0; i < 10; i++) {
			cout << c[i] << " ";
		}
		cout << endl;
		partThree <int> (c);
		cout << "Reversed Order: ";
		for (int i = 0; i < 10; i++) {
			cout << c[i] << " ";
		}
		break;
	case 4:
		break;
	}
}