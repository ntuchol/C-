 #include <iostream>
 #include <string>
 #include <sstream>
 #include <vector>

        int main() {
            std::string s = "apple,banana,orange";
            std::string token;
            std::stringstream ss(s);
            std::vector<std::string> tokens;

            while (std::getline(ss, token, ',')) {
                tokens.push_back(token);
            }

            for (const auto& t : tokens) {
                std::cout << t << std::endl;
            }
            return 0;
        }
