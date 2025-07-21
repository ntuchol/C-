#include <iostream>

// Represents a node in the binary tree
struct Node {
    Node* left;
    Node* right;
    bool marked; // Mark bit for reachability
    int state;   // 0: unvisited, 1: visiting left, 2: visiting right

    Node(Node* l = nullptr, Node* r = nullptr) : left(l), right(r), marked(false), state(0) {}
};

void schorrWaiteMark(Node* root) {
    if (root == nullptr) {
        return;
    }

    Node* current = root;
    Node* prev = nullptr; // Used to store the predecessor during pointer reversal

    while (current != nullptr) {
        if (!current->marked) {
            current->marked = true; // Mark the node as visited
        }

        if (current->state == 0) { // First visit: try left child
            current->state = 1;
            if (current->left != nullptr && !current->left->marked) {
                // Reverse pointer and move to left child
                Node* temp = current->left;
                current->left = prev;
                prev = current;
                current = temp;
                continue; // Continue traversal
            }
        }

        if (current->state == 1) { // Second visit: try right child
            current->state = 2;
            if (current->right != nullptr && !current->right->marked) {
                // Reverse pointer and move to right child
                Node* temp = current->right;
                current->right = prev;
                prev = current;
                current = temp;
                continue; // Continue traversal
            }
        }

        // Third visit or no unmarked children: backtrack
        if (prev != nullptr) {
            // Restore pointer and move back to parent
            if (prev->left == current) { // Current was the left child of prev
                prev->left = current->right; // Restore prev's left pointer
                current->right = prev;       // Restore current's pointer to prev
            } else { // Current was the right child of prev
                prev->right = current->left; // Restore prev's right pointer
                current->left = prev;        // Restore current's pointer to prev
            }
            Node* temp = prev;
            prev = current;
            current = temp;
        } else { // Back to the root, traversal complete
            break;
        }
    }
}

// Example usage and verification (e.g., print marked nodes)
void printMarkedNodes(Node* node) {
    if (node == nullptr) return;
    if (node->marked) {
        std::cout << "Node marked: " << node << std::endl;
    }
    printMarkedNodes(node->left);
    printMarkedNodes(node->right);
}

// Main function to demonstrate
int main() {
    // Create a sample binary tree
    Node* root = new Node();
    root->left = new Node();
    root->right = new Node();
    root->left->left = new Node();

    std::cout << "Before marking:" << std::endl;
    printMarkedNodes(root);

    schorrWaiteMark(root);

    std::cout << "\nAfter marking:" << std::endl;
    printMarkedNodes(root);

    // Clean up memory (not shown in detail for brevity)
    // In a real application, a garbage collector would handle this.
    return 0;
}