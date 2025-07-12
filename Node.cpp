template <typename T>
class Node {
public:
    T data; // Data stored in the node
    Node<T>* next; // Pointer to the next node in a sequence (e.g., linked list)

    // Constructor
    Node(T val) : data(val), next(nullptr) {}
};