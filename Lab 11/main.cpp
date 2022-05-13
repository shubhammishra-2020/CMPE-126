#include <iostream>
#include "binaryTree.h"
using namespace std;
int main() {
    int num = 10;
    binaryTree <int> root(10);
    root.addNode(20);
    root.addNode(75);
    root.addNode(86);

    cout << "Searching for " << num <<  " in binaryTree..." << endl;
    if(root.search(num) == 1){
        cout << "Found" << endl;
    }
    else{
        cout << "Not in tree" << endl;
    }

    //root.deleteNode(&root,10);
    cout << "Elements printed in Post Order: ";
    root.printPostOrder(&root);

    cout << endl << "Elements printed in Order: ";
    root.printinOrder(&root);

    cout << endl << "Elements printed in Pre Order: ";
    root.printPreorder(&root);
    cout << endl;
    cout << "Number of nodes: " << root.count(&root);
    cout << endl;
    cout << "Number of leaves: " << root.getLeaf(&root);
    cout << endl <<"Removing 10: ";
    root.deleteNode(&root,10);
    root.printPreorder(&root);


    return 0;
}
