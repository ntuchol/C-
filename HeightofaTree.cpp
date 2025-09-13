struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int calculateHeight(Node* root) {
    if (root == nullptr) {
        return -1; 
    }

    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);

    return 1 + std::max(leftHeight, rightHeight);
}
