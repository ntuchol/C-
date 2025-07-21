#include <iostream>
#include <vector>

// Assuming a simplified B-tree Node structure for demonstration
// In a real B-tree, nodes would have more complex structures
// including pointers to child nodes and multiple keys.
struct BTreeNode {
    std::vector<int> keys;
    std::vector<BTreeNode*> children; // Pointers to child nodes
    bool is_leaf;

    BTreeNode(bool leaf) : is_leaf(leaf) {}
};

void printBTreeInOrder(BTreeNode* node) {
    if (node == nullptr) {
        return;
    }

    int num_keys = node->keys.size();

    // Traverse children and keys
    int i;
    for (i = 0; i < num_keys; ++i) {
        // If not a leaf, recursively print the i-th child
        if (!node->is_leaf) {
            printBTreeInOrder(node->children[i]);
        }
        // Print the i-th key
        std::cout << node->keys[i] << " ";
    }

    // If not a leaf, print the last child (after the last key)
    if (!node->is_leaf) {
        printBTreeInOrder(node->children[i]);
    }
}

// Example usage (simplified, assumes a B-tree is already built)
int main() {
    // This is a highly simplified representation for demonstration.
    // A full B-tree implementation would involve insertion, splitting, etc.
    BTreeNode* root = new BTreeNode(false); // Not a leaf

    root->keys.push_back(10);
    root->keys.push_back(20);

    BTreeNode* child1 = new BTreeNode(true); // Leaf
    child1->keys.push_back(5);
    child1->keys.push_back(8);

    BTreeNode* child2 = new BTreeNode(true); // Leaf
    child2->keys.push_back(12);
    child2->keys.push_back(15);

    BTreeNode* child3 = new BTreeNode(true); // Leaf
    child3->keys.push_back(25);
    child3->keys.push_back(30);

    root->children.push_back(child1);
    root->children.push_back(child2);
    root->children.push_back(child3);

    std::cout << "B-tree contents in ascending order: ";
    printBTreeInOrder(root);
    std::cout << std::endl;

    // Clean up memory (important in real applications)
    delete child1;
    delete child2;
    delete child3;
    delete root;

    return 0;
}