    #include <iostream>

    class IntStack {
    private:
        int* arr;
        int top;
        int capacity;

    public:
        IntStack(int size) {
            capacity = size;
            arr = new int[capacity];
            top = -1; // Indicates an empty stack
        }

        ~IntStack() {
            delete[] arr;
        }

        void push(int x) {
            if (top == capacity - 1) {
                std::cout << "Stack Overflow\n";
                return;
            }
            arr[++top] = x;
        }

        int pop() {
            if (top == -1) {
                std::cout << "Stack Underflow\n";
                return -1; // Or throw an exception
            }
            return arr[top--];
        }

        int peek() {
            if (top == -1) {
                std::cout << "Stack is empty\n";
                return -1; // Or throw an exception
            }
            return arr[top];
        }

        bool isEmpty() {
            return top == -1;
        }

        int size() {
            return top + 1;
        }
    };

    int main() {
        IntStack myStack(5); // Create a stack with capacity 5

        myStack.push(10);
        myStack.push(20);
        std::cout << "Top element: " << myStack.peek() << std::endl; // Output: 20
        myStack.pop();
        std::cout << "Top element after pop: " << myStack.peek() << std::endl; // Output: 10

        return 0;
    }