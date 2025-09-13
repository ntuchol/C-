#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; 
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr; 
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void deleteNode(int val) {
        if (head == nullptr) {
            std::cout << "List is empty, cannot delete." << std::endl;
            return;
        }

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != val) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            std::cout << "Node with value " << val << " not found." << std::endl;
        }
    }

    void display() {
        Node* current = head;
        if (current == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);
    list.insertAtEnd(30);

    std::cout << "Linked list after insertions: ";
    list.display();

    list.deleteNode(20);
    std::cout << "Linked list after deleting 20: ";
    list.display();

    list.deleteNode(5);
    std::cout << "Linked list after deleting 5: ";
    list.display();

    list.deleteNode(100); 
    list.display();

    return 0;
}
