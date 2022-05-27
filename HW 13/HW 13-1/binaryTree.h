//
// Created by Shubham Mishra on 5/1/2022.
//

#ifndef HW13_1_BINARYTREE_H
#define HW13_1_BINARYTREE_H
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
};


#endif //HW13_1_BINARYTREE_H
