#include <iostream>

struct Node {
    Node* left;
    Node* right;
    bool marked; 
    int state;   
    Node(Node* l = nullptr, Node* r = nullptr) : left(l), right(r), marked(false), state(0) {}
};

void schorrWaiteMark(Node* root) {
    if (root == nullptr) {
        return;
    }

    Node* current = root;
    Node* prev = nullptr; 
    
    while (current != nullptr) {
        if (!current->marked) {
            current->marked = true; 
        }

        if (current->state == 0) { 
            current->state = 1;
            if (current->left != nullptr && !current->left->marked) {
                Node* temp = current->left;
                current->left = prev;
                prev = current;
                current = temp;
                continue; 
            }
        }

        if (current->state == 1) { 
            current->state = 2;
            if (current->right != nullptr && !current->right->marked) {
                Node* temp = current->right;
                current->right = prev;
                prev = current;
                current = temp;
                continue; 
            }
        }

        if (prev != nullptr) {
            if (prev->left == current) { 
                prev->left = current->right; 
                current->right = prev;       
            } else { 
                prev->right = current->left; 
                current->left = prev;        
            }
            Node* temp = prev;
            prev = current;
            current = temp;
        } else { 
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
