struct Node {
    int data;
    Node* left;
    Node* right;
};

// ... (insert and findMin functions as needed)

Node* deleteNode(Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else { // Node with the key found
        // Case 1: No child or one child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 2: Two children
        Node* temp = findMin(root->right); // Find in-order successor
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}