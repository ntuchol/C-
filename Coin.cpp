struct Coin {
    int value_in_cents; // Value in the smallest denomination (e.g., cents)
    std::string name;   // Name of the coin (e.g., "Quarter", "Dime")

    // Optional: Constructor for easy initialization
    Coin(int val, const std::string& n) : value_in_cents(val), name(n) {}
};