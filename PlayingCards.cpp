#include <iostream>
#include <string>

enum class Suit { Hearts, Diamonds, Clubs, Spades };
enum class Rank { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

class Card {
public:
    Card(Suit suit, Rank rank);
    Suit getSuit() const;
    Rank getRank() const;
    // Overload << for easy printing
    friend std::ostream& operator<<(std::ostream& os, const Card& card);

private:
    Suit m_suit;
    Rank m_rank;
};

#include <vector>
#include <random>
#include <algorithm> // For std::shuffle

class Deck {
public:
    Deck(); // Constructor to populate the deck
    void shuffle();
    Card dealCard(); // Returns a Card object
    bool isEmpty() const;
    void reset();

private:
    std::vector<Card> m_cards;
};