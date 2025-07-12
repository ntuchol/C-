struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int calculateHeight(Node* root) {
    // Base case: empty tree
    if (root == nullptr) {
        return -1; // Height of an empty tree is -1 (counting edges)
    }

    // Recursively calculate height of left and right subtrees
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);

    // Height of current node is 1 + maximum of left and right subtree heights
    return 1 + std::max(leftHeight, rightHeight);
}