#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* searchBST(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchBST(root->left, key);
    }
    else {
        return searchBST(root->right, key);
    }
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    int keyToFind = 40;
    Node* foundNode = searchBST(root, keyToFind);

    if (foundNode) {
        std::cout << "Value " << keyToFind << " found in the BST." << std::endl;
    } else {
        std::cout << "Value " << keyToFind << " not found in the BST." << std::endl;
    }

    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
