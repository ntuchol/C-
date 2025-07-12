#include <iostream>
#include <string> // Required if using std::string for suit representation

// Define enums for Suits and Ranks for better readability and type safety
enum class Suit {
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

enum class Rank {
    Two = 2,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace
};

class Card {
private:
    const Suit suit;  // Declare suit as a private constant data member
    const Rank pips;  // Declare pips as a private constant data member

public:
    // Constructor to initialize the constant data members using an initializer list
    Card(Suit s, Rank p) : suit(s), pips(p) {
        // No other actions are required within the constructor body
        // as the members are already initialized
    }

    // Accessor methods to retrieve the constant data members
    Suit getSuit() const { // Mark as const since it doesn't modify the object
        return suit;
    }

    Rank getPips() const { // Mark as const since it doesn't modify the object
        return pips;
    }
};

int main() {
    // Example usage of the Card class
    Card myCard(Suit::Hearts, Rank::Ace); // Create a card (Ace of Hearts)

    std::cout << "My card's suit: " << static_cast<int>(myCard.getSuit()) << std::endl; // Output the numerical enum value
    std::cout << "My card's pips: " << static_cast<int>(myCard.getPips()) << std::endl; // Output the numerical enum value

    return 0;
}