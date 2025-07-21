struct Node {
    int data; // Or any data type
    Node* next;
};

int getLength(Node* head) {
    // Base case: If the list is empty (head is nullptr), the length is 0.
    if (head == nullptr) {
        return 0;
    } 
    // Recursive step: Add 1 for the current node and recursively call
    // getLength for the rest of the list (head->next).
    else {
        return 1 + getLength(head->next);
    }
}
int length = getLength(myHead);
