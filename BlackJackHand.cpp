#include <iostream>
#include <vector>
#include <string>
#include <numeric> 

struct Card {
    std::string rank;
    std::string suit;
    int value; 

    Card(std::string r, std::string s, int v) : rank(r), suit(s), value(v) {} 
};

int calculateHandValue(const std::vector<Card>& hand) {
    int score = 0;
    int aceCount = 0;

    for (const Card& card : hand) { 
        score += card.value;
        if (card.rank == "Ace") { 
            aceCount++;
        }
    }

    while (score > 21 && aceCount > 0) {
        score -= 10; 
        aceCount--;
    }

    return score;
}

int main() {
    std::vector<Card> playerHand;

    playerHand.push_back(Card("King", "Hearts", 10));
    playerHand.push_back(Card("Ace", "Spades", 11));

    int handValue = calculateHandValue(playerHand);

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
