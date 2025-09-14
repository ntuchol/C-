struct Node {
    int data;
    Node* next;
};

int getLength(Node* head) {
    if (head == nullptr) {
        return 0;
    } 
    else {
        return 1 + getLength(head->next);
    }
}
int length = getLength(myHead);
