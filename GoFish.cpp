class Card {
private:
    int rank; // 0-12 for Ace-King
    int suit; // 0-3 for Clubs, Diamonds, Hearts, Spades

public:
    Card(int r, int s) : rank(r), suit(s) {} // Constructor
    int getRank() const { return rank; }
    int getSuit() const { return suit; }
    // Add other methods as needed (e.g., printing card information)
};

#include <vector>
#include <random>
#include <chrono>

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck() {
        // Initialize deck with 52 cards
        for (int s = 0; s < 4; ++s) {
            for (int r = 0; r < 13; ++r) {
                cards.push_back(Card(r, s));
            }
        }
    }

    void shuffle() {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(cards.begin(), cards.end(), std::default_random_engine(seed));
    }

    Card draw() {
        Card drawnCard = cards.back();
        cards.pop_back();
        return drawnCard;
    }

    // Add other methods as needed (e.g., dealing cards)
};