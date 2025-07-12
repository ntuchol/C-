

#include <iostream>
#include <string>
#include <map>
#include <sstream>

class Parser {
public:
    // Constructor that takes the input string to be parsed
    Parser(const std::string& input_data) : data_(input_data) {}

    // Method to perform the parsing operation
    bool parse() {
        std::stringstream ss(data_);
        std::string line;
        while (std::getline(ss, line)) {
            // Find the position of the delimiter (e.g., '=')
            size_t delimiter_pos = line.find('=');
            if (delimiter_pos != std::string::npos) {
                std::string key = line.substr(0, delimiter_pos);
                std::string value = line.substr(delimiter_pos + 1);
                parsed_data_[key] = value;
            } else {
                // Handle lines without a delimiter, if necessary
                std::cerr << "Warning: Skipping malformed line: " << line << std::endl;
            }
        }
        return !parsed_data_.empty(); // Return true if any data was parsed
    }

    // Method to retrieve a parsed value by key
    std::string get_value(const std::string& key) const {
        auto it = parsed_data_.find(key);
        if (it != parsed_data_.end()) {
            return it->second;
        }
        return ""; // Return empty string if key not found
    }

    // Method to print all parsed key-value pairs
    void print_parsed_data() const {
        for (const auto& pair : parsed_data_) {
            std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
        }
    }

private:
    std::string data_; // Stores the raw input data
    std::map<std::string, std::string> parsed_data_; // Stores the parsed key-value pairs
};

int main() {
    std::string config_string = "name=Alice\nage=30\ncity=New York";
    Parser config_parser(config_string);

    if (config_parser.parse()) {
        std::cout << "Parsing successful." << std::endl;
        config_parser.print_parsed_data();

        std::cout << "\nRetrieving specific values:" << std::endl;
        std::cout << "Name: " << config_parser.get_value("name") << std::endl;
        std::cout << "Age: " << config_parser.get_value("age") << std::endl;
    } else {
        std::cout << "Parsing failed or no data found." << std::endl;
    }

    return 0;
}