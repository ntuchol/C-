Node* deleteNode(Node* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else { // Found the node to delete
        // Case 1: No child or one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children (Hibbard's specific step)
        Node* successor = findMin(root->right); // find smallest in right subtree
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data); // delete successor
    }
    return root;
}

// Helper function to find the minimum node in a subtree
Node* findMin(Node* node) {
    while (node->left != nullptr) {
        node = node->left;
    }
    return node;
}