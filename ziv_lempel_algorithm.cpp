include <iostream>
#include <string>
#include <vector>
#include <map> // Or unordered_map for potentially better performance

// Encoding function
std::vector<int> lzw_encode(const std::string& s) {
    std::map<std::string, int> dictionary;
    for (int i = 0; i <= 255; ++i) {
        dictionary[std::string(1, char(i))] = i;
    }

    std::string current_string = "";
    current_string += s[0];
    int next_code = 256;
    std::vector<int> output_codes;

    for (size_t i = 1; i < s.length(); ++i) {
        char next_char = s[i];
        if (dictionary.count(current_string + next_char)) {
            current_string += next_char;
        } else {
            output_codes.push_back(dictionary[current_string]);
            dictionary[current_string + next_char] = next_code++;
            current_string = std::string(1, next_char);
        }
    }
    output_codes.push_back(dictionary[current_string]); // Output the last code
    return output_codes;
}

// Decoding function
std::string lzw_decode(const std::vector<int>& encoded_codes) {
    std::map<int, std::string> dictionary;
    for (int i = 0; i <= 255; ++i) {
        dictionary[i] = std::string(1, char(i));
    }

    std::string decoded_string = "";
    int old_code = encoded_codes[0];
    decoded_string += dictionary[old_code];
    int next_code = 256;

    for (size_t i = 1; i < encoded_codes.size(); ++i) {
        int new_code = encoded_codes[i];
        std::string s;
        if (dictionary.count(new_code)) {
            s = dictionary[new_code];
        } else if (new_code == next_code) {
            s = dictionary[old_code] + dictionary[old_code][0];
        } else {
            // Error handling for invalid codes
            return "";
        }
        decoded_string += s;
        dictionary[next_code++] = dictionary[old_code] + s[0];
        old_code = new_code;
    }
    return decoded_string;
}

// int main() {
//     std::string original_text = "WYS*WYGWYS*WYSWYSG";
//     std::vector<int> encoded = lzw_encode(original_text);
//     std::cout << "Encoded codes: ";
//     for (int code : encoded) {
//         std::cout << code << " ";
//     }
//     std::cout << std::endl;
//
//     std::string decoded_text = lzw_decode(encoded);
//     std::cout << "Decoded text: " << decoded_text << std::endl;
//
//     return 0;
// }