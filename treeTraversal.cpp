#include <iostream>
using namespace std;

template <typename T>
struct BinaryNode {
    T data;
    BinaryNode* left;
    BinaryNode* right;

    BinaryNode(const T& d = T()) : data(d), left(nullptr), right(nullptr) {}
};

template <typename T>
void preorder(BinaryNode<T>* t) {
    if (t != nullptr) {
        cout << t->data << " -> ";
        preorder(t->left);
        preorder(t->right);
    }
}

template <typename T>
void inorder(BinaryNode<T>* t) {
    if (t != nullptr) {
        inorder(t->left);
        cout << t->data << " -> ";
        inorder(t->right);
    }
}

template <typename T>
void postorder(BinaryNode<T>* t) {
    if (t != nullptr) {
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " -> ";
    }
}