#include <iostream>
int main() {
    double score1, score2, score3, score4, score5; 

    std::cout << "Enter score for Test 1: ";
    std::cin >> score1;

    std::cout << "Enter score for Test 2: ";
    std::cin >> score2;

    std::cout << "Enter score for Test 3: ";
    std::cin >> score3;

    std::cout << "Enter score for Test 4: ";
    std::cin >> score4;

    std::cout << "Enter score for Test 5: ";
    std::cin >> score5;

    double sum = score1 + score2 + score3 + score4 + score5;

    double average = sum / 5.0;

    std::cout << "The average of the five tests is: " << average << std::endl;

    return 0; 
}
