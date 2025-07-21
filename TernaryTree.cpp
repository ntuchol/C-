struct TernaryTreeNode {
        int data;
        TernaryTreeNode* left;
        TernaryTreeNode* middle;
        TernaryTreeNode* right;

        TernaryTreeNode(int val) : data(val), left(nullptr), middle(nullptr), right(nullptr) {}
    };
