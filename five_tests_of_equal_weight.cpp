#include <iostream> // Required for input/output operations

int main() {
    double score1, score2, score3, score4, score5; // Declare variables to store the scores

    // Prompt the user to enter each score
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

    // Calculate the sum of the scores
    double sum = score1 + score2 + score3 + score4 + score5;

    // Calculate the average (using 5.0 for floating-point division)
    double average = sum / 5.0;

    // Display the calculated average
    std::cout << "The average of the five tests is: " << average << std::endl;

    return 0; // Indicate successful program execution
}