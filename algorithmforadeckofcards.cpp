#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>    
#include <chrono>    
struct Card {
    std::string rank;
    std::string suit;

    Card(std::string r, std::string s) : rank(r), suit(s) {}

    friend std::ostream& operator<<(std::ostream& os, const Card& card) {
        os << card.rank << " of " << card.suit;
        return os;
    }
};

std::vector<Card> createDeck() {
    std::vector<Card> deck;
    std::string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for (const std::string& suit : suits) {
        for (const std::string& rank : ranks) {
            deck.emplace_back(rank, suit);
        }
    }
    return deck;
}

void shuffleDeck(std::vector<Card>& deck) {
    std::random_device rd;
    std::mt19937 g(rd()); 
    std::chrono::system_clock::now().time_since_epoch().count()
    std::mt19937 g(std::chrono::system_clock::now().time_since_epoch().count());

    std::shuffle(deck.begin(), deck.end(), g);
}

void printDeck(const std::vector<Card>& deck) {
    for (const Card& card : deck) {
        std::cout << card << std::endl;
    }
}

int main() {
    std::vector<Card> myDeck = createDeck();

    std::cout << "Original Deck:" << std::endl;
    printDeck(myDeck);

    shuffleDeck(myDeck);

    std::cout << "\nShuffled Deck:" << std::endl;
    printDeck(myDeck);

    return 0;
}
