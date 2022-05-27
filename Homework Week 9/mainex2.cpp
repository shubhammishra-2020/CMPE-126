#include <iostream>
#include "linkedStack.h"
using namespace std;

int main() {
	linkedStackType <int> stack1;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);

	linkedStackType <int> stack2;

	stack1.reverseStack(stack2);
	
	cout << "Stack 2 items: " << endl;
	for (int i = 0; i < 4; i++) {
		cout << stack2.top() << " ";
		stack2.pop();
	}

}
