#include <map>
#include <string>

    std::map<std::string, int> ages; // Key: string, Value: int
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    int alice_age = ages["Alice"]; // Accessing value by key


#include <unordered_map>
#include <string>

    std::unordered_map<std::string, double> prices; // Key: string, Value: double
    prices["Apple"] = 1.25;
    prices["Banana"] = 0.75;
    double apple_price = prices["Apple"]; // Accessing value by key

#include <map>
#include <string>

    std::multimap<std::string, std::string> synonyms; // Key: string, Value: string
    synonyms.insert({"happy", "joyful"});
    synonyms.insert({"happy", "content"});