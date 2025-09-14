#include <map>
#include <iostream>

template <typename T>
class SparseArray {
private:
    std::map<int, T> data; 
    T defaultValue;       
public:
    SparseArray(T defaultVal = T()) : defaultValue(defaultVal) {}

    T& operator[](int index) {
        if (data.find(index) == data.end()) {
            data[index] = defaultValue;
        }
        return data[index];
    }

    const T& operator[](int index) const {
        auto it = data.find(index);
        if (it != data.end()) {
            return it->second;
        }
        return defaultValue;
    }

    void set(int index, T value) {
        if (value == defaultValue) {
            data.erase(index);
        } else {
            data[index] = value;
        }
    }

    bool isStored(int index) const {
        return data.count(index) > 0;
    }

    size_t size() const {
        return data.size();
    }

    void clear() {
        data.clear();
    }

    void print() const {
        for (const auto& pair : data) {
            std::cout << "Index: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }
};

int main() {
    SparseArray<int> sparseArr(0); 

    sparseArr[5] = 10;
    sparseArr[100] = 20;
    sparseArr[2] = 5;

    std::cout << "Value at index 5: " << sparseArr[5] << std::endl;      
    std::cout << "Value at index 0: " << sparseArr[0] << std::endl;      
    std::cout << "Value at index 100: " << sparseArr[100] << std::endl;  

    sparseArr.set(2, 0); 
    std::cout << "Value at index 2 (after setting to default): " << sparseArr[2] << std::endl; 

    std::cout << "\nStored elements:" << std::endl;
    sparseArr.print();

    std::cout << "Is index 5 stored? " << (sparseArr.isStored(5) ? "Yes" : "No") << std::endl; 
    std::cout << "Is index 2 stored? " << (sparseArr.isStored(2) ? "Yes" : "No") << std::endl; 

    return 0;
}
