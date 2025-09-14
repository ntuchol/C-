Node* nodePtr;

Node* head = nullptr; 
Node* newNode = new Node(); 
newNode->data = 10; 
newNode->next = nullptr; 

struct Node {
    int data;
    Node* next; 
};

Node* current = head; 
while (current != nullptr) {
    current = current->next; 
}
