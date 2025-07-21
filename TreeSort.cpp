// Basic Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert into BST
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

// Function for in-order traversal
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        // Process or print root->data here
        inorderTraversal(root->right);
    }
}

// Main logic for Tree Sort
void treeSort(int arr[], int n) {
    Node* root = nullptr;
    for (int i = 0; i < n; ++i) {
        root = insert(root, arr[i]);
    }
    inorderTraversal(root); // This will output the sorted elements
    // Remember to deallocate tree memory
}