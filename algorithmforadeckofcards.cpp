#include <iostream>
#include <vector>
#include <algorithm> // For std::shuffle
#include <random>    // For std::mt19937 and std::random_device
#include <chrono>    // For seeding with time

// Represents a single playing card
struct Card {
    std::string rank;
    std::string suit;

    // Constructor for a Card
    Card(std::string r, std::string s) : rank(r), suit(s) {}

    // Overload the << operator for easy printing of a Card
    friend std::ostream& operator<<(std::ostream& os, const Card& card) {
        os << card.rank << " of " << card.suit;
        return os;
    }
};

// Function to initialize a standard 52-card deck
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

// Function to shuffle the deck
void shuffleDeck(std::vector<Card>& deck) {
    // Obtain a random number engine
    std::random_device rd;
    std::mt19937 g(rd()); // Seed the engine with a non-deterministic source

    // If std::random_device is not available or non-deterministic,
    // you can use std::chrono::system_clock::now().time_since_epoch().count()
    // std::mt19937 g(std::chrono::system_clock::now().time_since_epoch().count());

    // Use std::shuffle to shuffle the deck
    std::shuffle(deck.begin(), deck.end(), g);
}

// Function to print the deck
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