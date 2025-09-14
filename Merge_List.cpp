#include <list>
#include <iostream>
#include <algorithm> 

int main() {
    std::list<int> list1 = {10, 30, 50};
    std::list<int> list2 = {20, 40, 60};

    list1.merge(list2); 

    std::cout << "Merged list: ";
    std::for_each(list1.begin(), list1.end(), [](int n){ std::cout << n << " "; });
    std::cout << std::endl;

    return 0;
}

#include <list>
#include <iostream>

int main() {
    std::list<int> listA = {1, 2, 3};
    std::list<int> listB = {4, 5, 6};

    listA.splice(listA.end(), listB); 
    
    std::cout << "Concatenated list: ";
    for (int n : listA) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
