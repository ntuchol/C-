#include <map>
#include <string>

    std::map<std::string, int> ages; 
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    int alice_age = ages["Alice"]; 


#include <unordered_map>
#include <string>

    std::unordered_map<std::string, double> prices; 
    prices["Apple"] = 1.25;
    prices["Banana"] = 0.75;
    double apple_price = prices["Apple"]; 

#include <map>
#include <string>

    std::multimap<std::string, std::string> synonyms; 
    synonyms.insert({"happy", "joyful"});
    synonyms.insert({"happy", "content"});
