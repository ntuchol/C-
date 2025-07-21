#include <iostream>

// Define a structure for a tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to count the number of nodes recursively
int countNodes(TreeNode* root) {
    // Base case: if the root is null, there are no nodes
    if (root == nullptr) {
        return 0;
    }
    // Recursive step: count the current node + nodes in left subtree + nodes in right subtree
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    // Example usage:
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Count the nodes in the tree
    int nodeCount = countNodes(root);
    std::cout << "Number of nodes in the binary tree: " << nodeCount << std::endl;

    // Clean up memory (important in C++ to prevent memory leaks)
    // In a real application, a more robust memory management strategy would be used.
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}