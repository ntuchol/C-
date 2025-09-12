#include <iostream>
#include <string> 

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
    const Suit suit;  
    const Rank pips;  

public:
    Card(Suit s, Rank p) : suit(s), pips(p) {
        
    }

    Suit getSuit() const { 
        return suit;
    }

    Rank getPips() const { 
        return pips;
    }
};

int main() {
    Card myCard(Suit::Hearts, Rank::Ace); 

    std::cout << "My card's suit: " << static_cast<int>(myCard.getSuit()) << std::endl; 
    std::cout << "My card's pips: " << static_cast<int>(myCard.getPips()) << std::endl; 

    return 0;
}
