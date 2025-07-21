struct Node {
    int key; // Or any other data type
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int value) : key(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->key) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}