#include <vector>
#include <string>

class Truckload {
public:
    void addItem(const std::string& item) {
        items_.push_back(item);
    }

    void removeItem(const std::string& item) {
    }

    std::vector<std::string>::iterator begin() {
        return items_.begin();
    }

    std::vector<std::string>::iterator end() {
        return items_.end();
    }

private:
    std::vector<std::string> items_; 
};
