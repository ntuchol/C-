void deleteTail(Node*& head, Node*& tail) {
    if (head == nullptr) { 
        return;
    }
    if (head == tail) { 
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

    delete tail;
    tail = current;
    tail->next = nullptr; 
}
