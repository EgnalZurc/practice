/************************************************************************************//**
 *  @file       tree.cpp
 *
 *  @brief      Brief descriptinon of tree.cpp 
 *
 *  @date       2019-10-23 12:47
 *
 ***************************************************************************************/

//#include "tree.h"
#include <iostream>
#include <climits>

class Node {
  public:
    Node() {
      _right = _left = 0;
    }
    Node(const int &data) : _data(data) {
      _right = _left = 0;
    }
    Node* right() {
      return _right;
    }
    void right(Node* node) {
      _right = node;
    }
    Node* left() {
      return _left;
    }
    void left(Node* node) {
      _left = node;
    }
    int data() {
      return _data;
    }
    void data(const int &data) {
      _data = data;
    }
  private:
    int    _data;
    Node * _right;
    Node * _left;
};

class Tree {
  public:
    Node* _root;
    Tree() {}
    // A utility function to do inorder traversal of BST 
    void inorder(Node *root) { 
      if (root != NULL) { 
        inorder(root->left()); 
        printf("%d \n", root->data()); 
        inorder(root->right()); 
      } 
    } 
    void preorder(Node *root) { 
      if (root != NULL) { 
        inorder(root->left()); 
        printf("%d \n", root->data()); 
        inorder(root->right()); 
      } 
    } 
    void postorder(Node *root) { 
      if (root != NULL) { 
        inorder(root->left()); 
        printf("%d \n", root->data()); 
        inorder(root->right()); 
      } 
    } 
    void inorder() { 
      if (_root != NULL) { 
        inorder(_root);
      } 
    } 
    /*  A utility function to insert a new node with given key in BST */
    Node* insert(Node* node, int key) { 
      /*  If the tree is empty, return a new node */
      if (node == NULL) {
        Node* temp = new Node(key);
        return temp; 
      }
      /*  Otherwise, recur down the tree */
      if (key < node->data()) {
         node->left(insert(node->left(),key)); 
      } else if (key > node->data()) {
         node->right(insert(node->right(), key));
      }
      return node; 
    }
    /*  A utility function to insert a new node with given key in BST */
    void insert(int key) { 
      _root = insert(_root, key);
    }
}; 
   

int main() {
  Tree *tree = new Tree(); 
  tree->insert(50); 
  tree->insert(30); 
  tree->insert(20); 
  tree->insert(40); 
  tree->insert(70); 
  tree->insert(60); 
  tree->insert(80); 

  // print inoder traversal of the BST 
  tree->inorder();
  return 0;
}
