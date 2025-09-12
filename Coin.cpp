struct Coin {
    int value_in_cents; 
    std::string name;   
    Coin(int val, const std::string& n) : value_in_cents(val), name(n) {}
};
