class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int currentSize; // To keep track of the number of elements

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        currentSize = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isEmpty() {
        return currentSize == 0;
    }

    bool isFull() {
        return currentSize == capacity;
    }

    void enQueue(int value) {
        if (isFull()) {
            // Handle full queue condition (e.g., print error or throw exception)
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        currentSize++;
    }

    int deQueue() {
        if (isEmpty()) {
            // Handle empty queue condition (e.g., print error or throw exception)
            return -1; // Or a sentinel value
        }
        int dequeuedValue = arr[front];
        if (front == rear) { // Last element
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        currentSize--;
        return dequeuedValue;
    }

    int Front() {
        if (isEmpty()) {
            // Handle empty queue condition
            return -1;
        }
        return arr[front];
    }
};