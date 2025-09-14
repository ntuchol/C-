#include <iostream>
#include <vector>
#include <string>
#include <set>

class DFA {
public:
    DFA(int numStates, char startState, const std::set<char>& finalStates)
        : numStates_(numStates), startState_(startState), finalStates_(finalStates) {
        transitionTable_.resize(numStates_, std::vector<char>(256, -1)); 
    }

    void addTransition(char currentState, char inputSymbol, char nextState) {
        transitionTable_[currentState][inputSymbol] = nextState;
    }

    bool accepts(const std::string& input) {
        char currentState = startState_;
        for (char symbol : input) {
            if (transitionTable_[currentState][symbol] == -1) { 
                return false; 
            }
            currentState = transitionTable_[currentState][symbol];
        }
        return finalStates_.count(currentState); 
    }

private:
    int numStates_;
    char startState_;
    std::set<char> finalStates_;
    std::vector<std::vector<char>> transitionTable_; 
};

int main() {
    DFA dfa(3, '0', {'2'}); 
    dfa.addTransition('0', 'a', '0');
    dfa.addTransition('0', 'b', '1');
    dfa.addTransition('1', 'a', '0');
    dfa.addTransition('1', 'b', '2');
    dfa.addTransition('2', 'a', '0');
    dfa.addTransition('2', 'b', '2');

    std::cout << "Accepts 'baba': " << dfa.accepts("baba") << std::endl; 
    std::cout << "Accepts 'bab': " << dfa.accepts("bab") << std::endl;   
    std::cout << "Accepts 'ab': " << dfa.accepts("ab") << std::endl;    
    std::cout << "Accepts 'a': " << dfa.accepts("a") << std::endl;      

    return 0;
}
