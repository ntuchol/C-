#include <vector>
#include <string>

class Truckload {
public:
    void addItem(const std::string& item) {
        items_.push_back(item);
    }

    void removeItem(const std::string& item) {
        // Implement removal logic (e.g., iterating and finding the item)
    }

    // You can also provide an iterator to traverse the items
    std::vector<std::string>::iterator begin() {
        return items_.begin();
    }

    std::vector<std::string>::iterator end() {
        return items_.end();
    }

private:
    std::vector<std::string> items_; // Using a vector to hold items.
};