//
// Created by Shubham Mishra on 5/1/2022.
//

#ifndef HW13_2_BINARYTREE_H
#define HW13_2_BINARYTREE_H
#include <bits/stdc++.h>

template <class Type>
class binaryTree  {
public:
    Type data;
    binaryTree *left;
    binaryTree *right;

    binaryTree(Type val){
        data = val;
        left = NULL;
        right = NULL;
    }

    int count(binaryTree<Type> *root);
};
template <class Type>
int binaryTree<Type> ::count(binaryTree<Type> *root) {

    if(root != NULL) {
        return (1 + count(root->left) + count(root->right));
    }
}
#endif //HW13_2_BINARYTREE_H
