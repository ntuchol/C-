#include <iostream>
#include <vector>

struct BTreeNode {
    std::vector<int> keys;
    std::vector<BTreeNode*> children; 
    bool is_leaf;

    BTreeNode(bool leaf) : is_leaf(leaf) {}
};

void printBTreeInOrder(BTreeNode* node) {
    if (node == nullptr) {
        return;
    }

    int num_keys = node->keys.size();

     int i;
    for (i = 0; i < num_keys; ++i) {
        if (!node->is_leaf) {
            printBTreeInOrder(node->children[i]);
        }
        std::cout << node->keys[i] << " ";
    }

     if (!node->is_leaf) {
        printBTreeInOrder(node->children[i]);
    }
}

int main() {
     BTreeNode* root = new BTreeNode(false); 

    root->keys.push_back(10);
    root->keys.push_back(20);

    BTreeNode* child1 = new BTreeNode(true); 
    child1->keys.push_back(5);
    child1->keys.push_back(8);

    BTreeNode* child2 = new BTreeNode(true); 
    child2->keys.push_back(12);
    child2->keys.push_back(15);

    BTreeNode* child3 = new BTreeNode(true); 
    child3->keys.push_back(25);
    child3->keys.push_back(30);

    root->children.push_back(child1);
    root->children.push_back(child2);
    root->children.push_back(child3);

    std::cout << "B-tree contents in ascending order: ";
    printBTreeInOrder(root);
    std::cout << std::endl;

    delete child1;
    delete child2;
    delete child3;
    delete root;

    return 0;
}
