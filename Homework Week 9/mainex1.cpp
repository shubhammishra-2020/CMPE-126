#include <iostream>
#include "myStack.h"
using namespace std;

int main() {
	stackType <int> stack1(4);
	stackType <int> stack2;
	cout << "Max Stack 1 Size: " << stack1.getmaxStackSize() << endl;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);

	cout << "Stack 1 Elements : ";
	stack1.printStack();
	
	cout << endl;
	stack1.reverseStack(stack2);

	cout << "Stack 2 Elements : ";
	stack2.printStack();
	

}
