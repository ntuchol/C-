Node* nodePtr;

Node* head = nullptr; // Initialize to nullptr
Node* newNode = new Node(); // Dynamically allocate a new Node and store its address in newNode
newNode->data = 10; // Access the 'data' member of the Node pointed to by newNode
newNode->next = nullptr; // Access the 'next' pointer member

struct Node {
    int data;
    Node* next; // Pointer to the next Node
};

// ...
Node* current = head; // Start from the head of the list
while (current != nullptr) {
    // Process current->data
    current = current->next; // Move to the next Node
}