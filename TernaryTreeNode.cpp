struct TernaryTreeNode {
    char data; 
    TernaryTreeNode* left;
    TernaryTreeNode* middle;
    TernaryTreeNode* right;

    TernaryTreeNode(char val) : data(val), left(nullptr), middle(nullptr), right(nullptr) {}
};
