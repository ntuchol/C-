#include <iostream>
#include <vector>
#include <string>
#include <numeric> // For std::accumulate

// Represents a single playing card
struct Card {
    std::string rank;
    std::string suit;
    int value; 

    // Constructor for a Card object
    Card(std::string r, std::string s, int v) : rank(r), suit(s), value(v) {} 
};

// Calculates the score of a Blackjack hand
int calculateHandValue(const std::vector<Card>& hand) {
    int score = 0;
    int aceCount = 0;

    // Sum up the value of each card in the hand
    for (const Card& card : hand) { 
        score += card.value;
        if (card.rank == "Ace") { 
            aceCount++;
        }
    }

    // Adjust for Ace's 1 or 11 value
    while (score > 21 && aceCount > 0) {
        score -= 10; // Treat an Ace as 1 instead of 11
        aceCount--;
    }

    return score;
}

int main() {
    // Example usage:
    std::vector<Card> playerHand;

    // Deal some cards to the player's hand
    playerHand.push_back(Card("King", "Hearts", 10));
    playerHand.push_back(Card("Ace", "Spades", 11));

    // Calculate the hand's value
    int handValue = calculateHandValue(playerHand);

    // Output the result
    std::cout << "Player's Hand:" << std::endl;
    for (const Card& card : playerHand) {
        std::cout << card.rank << " of " << card.suit << std::endl;
    }
    std::cout << "Total Hand Value: " << handValue << std::endl;

    if (handValue > 21) {
        std::cout << "Busted!" << std::endl;
    } else if (handValue == 21 && playerHand.size() == 2) {
        std::cout << "Blackjack!" << std::endl;
    }

    return 0;
}