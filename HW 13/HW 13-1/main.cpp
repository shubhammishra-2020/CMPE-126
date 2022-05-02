#include <iostream>
#include "binaryTree.h"
using namespace std;

int main() {
    binaryTree <int> *root = new binaryTree<int> (1);
    root->left = new binaryTree <int> (2);
    root ->right = new binaryTree <int> (3);

    cout << "Elements in the tree are:" << endl << "  " << root->data;
    cout << endl;
    cout << " /" << " \\" << endl;
    cout << root ->left->data << "   " << root->right->data;
    return 0;
}
