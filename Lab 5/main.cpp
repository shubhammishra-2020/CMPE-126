#include <iostream>
#include "BaseLinkedListType.hpp"
#include "DerivedLinkedListType.h"
using namespace std;

template <class Type>
void linkedListType <Type> ::deletekElement(int k) {
	nodeType<Type>* current, * temp;
	int i;

	if (first == NULL)
		cout << "Cannot delete from an empty list." << endl;
	else
		if (k == 1)
		{
			current = first;
			first = first->next;
			if (first == NULL)
				last = NULL;
			delete current;
		}
		else
		{
			//find the spot before the kth element
			current = first->next;
			for (i = 2; i < k; i++)
				current = current->next;
			temp = current->next;
			current->next = temp->next;
			if (temp == last)
				last = current;
			delete temp;
		}
}
int main() {
	DerivedLinkedListType <int>* testList = new DerivedLinkedListType <int>;

	testList->initializeList();
	testList->insertFirst(400);
	testList->insertLast(2000);
	testList->insertFirst(1000000000);
	testList->insertFirst(100);
	testList->insertFirst(267);
	cout << "Elements in this list are: " << endl;
	testList->print();

	cout << "Deleting smallest element..." << endl;
	testList->deleteSmallest();
	cout << "Updated list: " << endl;
	testList->print();

	cout << "Deleting 2000..." << endl;
	testList->deleteOccurence(2000);
	cout << "Updated list: " << endl;
	testList->print();

	cout << "Finding value at location 1..." << endl;
	cout << "Value at location 1: " << testList->getK(1) << endl;

	testList->deletekElement(2);
	cout << "Deleting Kth element" << endl;
	testList->print();

}