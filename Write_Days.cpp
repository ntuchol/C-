#include <iostream>
#include <string>

int main() {
    int day_number;
    std::cout << "Enter a day number (1-7, where 1=Sunday): ";
    std::cin >> day_number;

    switch (day_number) {
        case 1:
            std::cout << "Day " << day_number << " is Sunday." << std::endl;
            break;
        case 2:
            std::cout << "Day " << day_number << " is Monday." << std::endl;
            break;
        case 3:
            std::cout << "Day " << day_number << " is Tuesday." << std::endl;
            break;
        case 4:
            std::cout << "Day " << day_number << " is Wednesday." << std::endl;
            break;
        case 5:
            std::cout << "Day " << day_number << " is Thursday." << std::endl;
            break;
        case 6:
            std::cout << "Day " << day_number << " is Friday." << std::endl;
            break;
        case 7:
            std::cout << "Day " << day_number << " is Saturday." << std::endl;
            break;
        default:
            std::cout << "Invalid day number." << std::endl;
            break;
    }

    std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    if (day_number >= 1 && day_number <= 7) {
        std::cout << "Using array: Day " << day_number << " is " << days[day_number - 1] << "." << std::endl;
    }

    return 0;
}
