//
// Created by Shubham Mishra on 5/1/2022.
//

#ifndef HW13_3_BINARYTREE_H
#define HW13_3_BINARYTREE_H
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

    int countLeaf(binaryTree<Type> *root);
};
template <class Type>
int binaryTree<Type> ::countLeaf(binaryTree<Type> *root) {

    if(root == NULL) {
        return 0;
    }
    if(root->left == NULL && root-> right == NULL){
        return 1;
    }
    else{
        return (countLeaf(root->left) + countLeaf(root->right));
    }
}



#endif //HW13_3_BINARYTREE_H
