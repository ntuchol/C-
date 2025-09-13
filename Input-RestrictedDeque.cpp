#include <deque>
#include <iostream>

template <typename T>
class InputRestrictedDeque {
private:
    std::deque<T> data;

public:
    InputRestrictedDeque() {}

    void push_back(const T& value) {
        data.push_back(value);
    }

    void pop_front() {
        if (!data.empty()) {
            data.pop_front();
        } else {
            std::cerr << "Deque is empty, cannot pop from front." << std::endl;
        }
    }

    void pop_back() {
        if (!data.empty()) {
            data.pop_back();
        } else {
            std::cerr << "Deque is empty, cannot pop from back." << std::endl;
        }
    }

    T& front() {
        return data.front();
    }

    T& back() {
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }

    size_t size() const {
        return data.size();
    }
};

int main() {
    InputRestrictedDeque<int> myDeque;

    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_back(30);

    std::cout << "Front: " << myDeque.front() << ", Back: " << myDeque.back() << std::endl;

    myDeque.pop_front();
    std::cout << "After pop_front, Front: " << myDeque.front() << ", Back: " << myDeque.back() << std::endl;

    myDeque.pop_back();
    std::cout << "After pop_back, Front: " << myDeque.front() << ", Back: " << myDeque.back() << std::endl;

    myDeque.push_front(5); 

    return 0;
}
