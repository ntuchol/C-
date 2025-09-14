#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void preorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << " ";
    preorderTraversal(root->left);  
    preorderTraversal(root->right);  
}

void preorderForestTraversal(const std::vector<Node*>& forestRoots) {
    for (Node* root : forestRoots) {
        if (root != nullptr) {
            preorderTraversal(root); 
        }
    }
    std::cout << std::endl;
}

int main() {
    Node* tree1_root = new Node(1);
    tree1_root->left = new Node(2);
    tree1_root->right = new Node(3);

    Node* tree2_root = new Node(4);
    tree2_root->left = new Node(5);

    Node* tree3_root = new Node(6);

    std::vector<Node*> forest;
    forest.push_back(tree1_root);
    forest.push_back(tree2_root);
    forest.push_back(tree3_root);

    std::cout << "Preorder traversal of the forest: ";
    preorderForestTraversal(forest);

    delete tree1_root->left;
    delete tree1_root->right;
    delete tree1_root;
    delete tree2_root->left;
    delete tree2_root;
    delete tree3_root;

    return 0;
}
