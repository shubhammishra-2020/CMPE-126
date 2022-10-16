#include <iostream>
#include "binaryTree.h"
using namespace std;

int main() {
    binaryTree <int> *root = new binaryTree<int> (5);
    root->left = new binaryTree <int> (2);
    root -> right = new binaryTree<int>(9);
    root -> left ->left = new binaryTree<int> (25);

    cout << "Number of nodes: " << root->count(root);

    return 0;
}
