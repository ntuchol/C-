#include <iostream>
#include <string>

enum class Suit { Hearts, Diamonds, Clubs, Spades };
enum class Rank { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

class Card {
public:
    Card(Suit suit, Rank rank);
    Suit getSuit() const;
    Rank getRank() const;
    friend std::ostream& operator<<(std::ostream& os, const Card& card);

private:
    Suit m_suit;
    Rank m_rank;
};

#include <vector>
#include <random>
#include <algorithm> 

class Deck {
public:
    Deck(); 
    void shuffle();
    Card dealCard(); 
    bool isEmpty() const;
    void reset();

private:
    std::vector<Card> m_cards;
};
