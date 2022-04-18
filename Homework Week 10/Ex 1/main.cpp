#include <iostream>
#include "linkedQueue.h"
using namespace std;

int main() {
	linkedQueueType <int> test;
	test.addQueue(1);
	test.addQueue(2);
	test.addQueue(6);
	test.addQueue(10);

	test.moveNthFront(2);
	cout << "Elements with 2nd element shifted to front: ";

	while (!test.isEmptyQueue()) {
		cout << " " << test.front();
		test.deleteQueue();
	}
}