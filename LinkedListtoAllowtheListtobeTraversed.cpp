template <typename T>
struct Node {
    T data;
    Node<T>* next;

    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    // Destructor to free allocated memory
    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    // Traversal method
    void traverse() const {
        Node<T>* current = head;
        while (current != nullptr) {
            // Process the data (e.g., print it)
            // Example: std::cout << current->data << " ";
            current = current->next;
        }
        // Example: std::cout << std::endl;
    }

    // Other methods like insertAtEnd, deleteNode, search, etc. can be added
};