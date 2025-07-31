struct TernaryTreeNode {
    char data; // Or any other data type
    TernaryTreeNode* left;
    TernaryTreeNode* middle;
    TernaryTreeNode* right;

    TernaryTreeNode(char val) : data(val), left(nullptr), middle(nullptr), right(nullptr) {}
};
