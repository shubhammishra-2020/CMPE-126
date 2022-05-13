//
// Created by Shubham Mishra on 5/4/2022.
//

#ifndef LAB_11_1_BINARYTREE_H
#define LAB_11_1_BINARYTREE_H

template <class Type>
class binaryTree {
private:
    Type data;
    binaryTree <Type> *left;
    binaryTree <Type> *right;

public:
    binaryTree(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }


    void addNode(Type value){
        if(data < this->data){

            if(this->left == NULL){
                this->left = new binaryTree(value);
            }
            else{
                this->left->addNode(value);
            }
        }

        else{
            if(this->right == NULL){
                this-> right = new binaryTree(value);
            }
            else{
                this->right->addNode(value);
            }
        }

    }
    bool search(Type value){
        if(value == this->data){
            return true;
        }

        else if(value < this->data){
            if(this->left != NULL){
                return this->left->search(value);
            }
        }

        else if(value > this->data){
            if(this->right != NULL){
                return this->right->search(value);
            }
        }
    }

    int successor(binaryTree<Type> *root){
        root = root->right;
        while(root->left != NULL ){
            root = root->left;
        }
        return root->data;
    }

    int predecessor(binaryTree<Type>*root){
        root = root->left;
        while(root->right != NULL){
            root = root->right;
        }

        return root->data;
    }

    binaryTree<Type>* deleteNode(binaryTree<Type>*root,Type removeEle){
        if(root == NULL){
            return NULL;
        }

        if(removeEle > root->data){
            root->right = deleteNode(root->right,removeEle);
        }

        else if(removeEle < root->data){
            root->left = deleteNode(root->left,removeEle);
        }

        else{
            if(root->left == NULL && root->right == NULL){
                root = NULL;
            }
            else if(root->right != NULL){
                root -> data = successor(root);
                root->right = deleteNode(root->right, root->data);
            }

            else{
                root->data = predecessor(root);
                root->left = deleteNode(root->left,root->data);
            }
        }
        return root;

    }

    void printPostOrder(binaryTree<Type> *node){
        if(node == NULL){
            return;
        }

        printPostOrder(node->left);

        printPostOrder(node->right);
        std :: cout << node->data << " ";

    }

    void printinOrder(binaryTree<Type> *node){
        if(node == NULL){
            return;
        }

        else{
            printinOrder(node->left);
            std:: cout << node->data << " ";
            printinOrder(node->right);
        }
    }

    void printPreorder(binaryTree<Type> *root){
        if(root == NULL){
            return;
        }

        std :: cout << root->data << " ";
        printPreorder(root->left);
        printPreorder(root->right);
    }

    int count(binaryTree<Type> *node){
        int c = 1;

        if(node == NULL){
            return 0;
        }

        else{
            c += count(node->left);
            c+= count(node->right);
            return c;
        }
    }

    int getLeaf(binaryTree<Type> *root){
        if(root == NULL){
            return 0;
        }

        if(root->left == NULL && root->right == NULL){
            return 1;
        }

        else{
            return getLeaf(root->left) + getLeaf(root->right);
        }

    }


};


#endif //LAB_11_1_BINARYTREE_H
