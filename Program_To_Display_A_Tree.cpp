#include <iostream>
#include <string>

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to print the tree in a visual representation
void printTree(Node* node, const std::string& prefix = "", bool isLeft = false) {
    if (node == nullptr) {
        return;
    }

    std::cout << prefix;
    std::cout << (isLeft ? "├── " : "└── "); // Branch indicator

    std::cout << node->data << std::endl;

    // Recursively call for left and right children
    printTree(node->left, prefix + (isLeft ? "│   " : "    "), true);
    printTree(node->right, prefix + (isLeft ? "│   " : "    "), false);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    // Display the tree
    std::cout << "Binary Tree Structure:" << std::endl;
    printTree(root);

    // Clean up memory (optional for this simple example, but good practice)
    // You would typically implement a destructor or a separate function for this
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}