#include <iostream>
#include <string>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void printTree(Node* node, const std::string& prefix = "", bool isLeft = false) {
    if (node == nullptr) {
        return;
    }

    std::cout << prefix;
    std::cout << (isLeft ? "├── " : "└── "); 
    std::cout << node->data << std::endl;

    printTree(node->left, prefix + (isLeft ? "│   " : "    "), true);
    printTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    std::cout << "Binary Tree Structure:" << std::endl;
    printTree(root);

    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
