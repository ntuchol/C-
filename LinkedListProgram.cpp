#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int val) : data(val), next(nullptr) {}
};

// LinkedList class to manage the list operations
class LinkedList {
private:
    Node* head; // Pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Destructor to free memory when the linked list is destroyed
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr; // Ensure head is null after deletion
    }

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a new node at the end of the list
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

    // Function to delete a node with a specific value
    void deleteNode(int val) {
        if (head == nullptr) {
            std::cout << "List is empty, cannot delete." << std::endl;
            return;
        }

        // If the node to be deleted is the head
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

        // If the node is found
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            std::cout << "Node with value " << val << " not found." << std::endl;
        }
    }

    // Function to display the linked list
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

// Example usage
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

    list.deleteNode(100); // Attempt to delete a non-existent node
    list.display();

    return 0;
}