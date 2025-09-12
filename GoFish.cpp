class Card {
private:
    int rank; 
    int suit; 

public:
    Card(int r, int s) : rank(r), suit(s) {} 
    int getRank() const { return rank; }
    int getSuit() const { return suit; }
};

#include <vector>
#include <random>
#include <chrono>

class Deck {
private:
    std::vector<Card> cards;

public:
    Deck() {
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

};
