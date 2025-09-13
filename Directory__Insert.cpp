#include <filesystem>
#include <iostream>

    int main() {
        std::filesystem::path new_dir_path = "my_new_directory";
        if (std::filesystem::create_directory(new_dir_path)) {
            std::cout << "Directory 'my_new_directory' created successfully." << std::endl;
        } else {
            std::cerr << "Failed to create directory 'my_new_directory'." << std::endl;
        }

        std::filesystem::path nested_dir_path = "parent/child/grandchild";
        if (std::filesystem::create_directories(nested_dir_path)) {
            std::cout << "Nested directories created successfully." << std::endl;
        } else {
            std::cerr << "Failed to create nested directories." << std::endl;
        }

        return 0;
    }
