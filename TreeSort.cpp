struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        inorderTraversal(root->right);
    }
}

void treeSort(int arr[], int n) {
    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        root = insert(root, arr[i]);
    }
    inorderTraversal(root); 
    // Remember to deallocate tree memory
}
