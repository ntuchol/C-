#include <vector>
#include <string>
#include <algorithm> 
#include <random>    

enum class Suit { Hearts, Diamonds, Clubs, Spades };
enum class Rank { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

struct Card {
    Suit suit;
    Rank rank;

};

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck() {
        for (int s_val = static_cast<int>(Suit::Hearts); s_val <= static_cast<int>(Suit::Spades); ++s_val) {
            for (int r_val = static_cast<int>(Rank::Two); r_val <= static_cast<int>(Rank::Ace); ++r_val) {
                cards.push_back({static_cast<Suit>(s_val), static_cast<Rank>(r_val)});
            }
        }
    }

    void shuffle() {
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(cards.begin(), cards.end(), g);
    }

    Card dealCard() {
        if (cards.empty()) {
            throw std::runtime_error("Deck is empty!");
        }
        Card dealtCard = cards.back();
        cards.pop_back();
        return dealtCard;
    }

    // void printDeck() const { /* ... */ }
};
