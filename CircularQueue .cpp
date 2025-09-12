class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int currentSize; 

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
            return -1; 
        }
        int dequeuedValue = arr[front];
        if (front == rear) { 
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
            return -1;
        }
        return arr[front];
    }
};
