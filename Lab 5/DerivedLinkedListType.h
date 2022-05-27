#ifndef DERIVEDLINKEDLISTTYPE_H
#define DERIVEDLINKEDLIST_H
#include "BaseLinkedListType.hpp"
template <class myType>
class DerivedLinkedListType : public linkedListType <myType>{
public:
	void deleteSmallest();
	myType getK(int k);
};

template <class myType>
void DerivedLinkedListType <myType> ::deleteSmallest() {
	nodeType<myType>* testVar = this->first;

	myType smallest = testVar->data;
	while (testVar != NULL) {
		if (testVar->data < smallest) {
			smallest = testVar->data;
		}

		testVar = testVar->next;
	}
	this->deleteNode(smallest);

}

template <class myType>
myType DerivedLinkedListType <myType> ::getK(int k) {

	nodeType<myType>* temp = this->first;
	while (k > 1) {
		temp = temp->next;
		k--;
	}
	return temp->data;
}

#endif // !DERIVEDLINKEDLISTTYPE_H
