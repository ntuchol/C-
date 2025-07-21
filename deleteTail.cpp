void deleteTail(Node*& head, Node*& tail) {
    if (head == nullptr) { // Empty list
        return;
    }
    if (head == tail) { // Single node list
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    Node* current = head;
    Node* prev = nullptr;
    while (current->next != tail) {
        prev = current;
        current = current->next;
    }
    // Now 'current' is the second-to-last node
    // and 'tail' is the last node

    delete tail;
    tail = current;
    tail->next = nullptr; // Disconnect the old tail
}