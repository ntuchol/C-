#include <iostream>
#include <string>
#include <cctype> // For isalpha, isspace, ispunct

// Define states
enum class State {
    Start,
    Word,
    Space,
    Punctuation,
    Error,
    End
};

// FSM class
class SentenceFSM {
public:
    SentenceFSM() : currentState(State::Start) {}

    void processInput(const std::string& sentence) {
        for (char c : sentence) {
            handleEvent(c);
            if (currentState == State::Error) {
                std::cout << "Error: Invalid character '" << c << "' encountered." << std::endl;
                return;
            }
        }
        handleEvent('\0'); // Signal end of input
    }

    void printCurrentState() const {
        switch (currentState) {
            case State::Start: std::cout << "Current State: Start" << std::endl; break;
            case State::Word: std::cout << "Current State: Word" << std::endl; break;
            case State::Space: std::cout << "Current State: Space" << std::endl; break;
            case State::Punctuation: std::cout << "Current State: Punctuation" << std::endl; break;
            case State::Error: std::cout << "Current State: Error" << std::endl; break;
            case State::End: std::cout << "Current State: End" << std::endl; break;
        }
    }

    State getCurrentState() const {
        return currentState;
    }

private:
    State currentState;

    void handleEvent(char inputChar) {
        switch (currentState) {
            case State::Start:
                if (std::isalpha(inputChar)) {
                    currentState = State::Word;
                } else if (std::isspace(inputChar)) {
                    // Ignore leading spaces or transition to error if not expected
                    // For this example, we'll allow leading spaces but ideally might require a word
                } else {
                    currentState = State::Error;
                }
                break;
            case State::Word:
                if (std::isalpha(inputChar)) {
                    // Stay in Word state
                } else if (std::isspace(inputChar)) {
                    currentState = State::Space;
                } else if (std::ispunct(inputChar)) {
                    currentState = State::Punctuation;
                } else if (inputChar == '\0') { // End of input
                    currentState = State::End;
                } else {
                    currentState = State::Error;
                }
                break;
            case State::Space:
                if (std::isalpha(inputChar)) {
                    currentState = State::Word;
                } else if (std::isspace(inputChar)) {
                    // Stay in Space state (multiple spaces are fine)
                } else if (std::ispunct(inputChar)) {
                    currentState = State::Punctuation;
                } else if (inputChar == '\0') { // End of input
                    currentState = State::End;
                } else {
                    currentState = State::Error;
                }
                break;
            case State::Punctuation:
                if (inputChar == '\0') { // End of input
                    currentState = State::End;
                } else {
                    currentState = State::Error; // Punctuation should be the end of the sentence
                }
                break;
            case State::Error:
                // Once in an error state, stay in error
                break;
            case State::End:
                // Once in an end state, stay in end
                break;
        }
    }
};

int main() {
    SentenceFSM fsm;
    std::string sentence1 = "Hello world.";
    std::string sentence2 = "This is a sentence!";
    std::string sentence3 = "Invalid input 123";

    std::cout << "Processing sentence 1: \"" << sentence1 << "\"" << std::endl;
    fsm.processInput(sentence1);
    fsm.printCurrentState();
    std::cout << std::endl;

    std::cout << "Processing sentence 2: \"" << sentence2 << "\"" << std::endl;
    fsm = SentenceFSM(); // Reset FSM for new sentence
    fsm.processInput(sentence2);
    fsm.printCurrentState();
    std::cout << std::endl;

    std::cout << "Processing sentence 3: \"" << sentence3 << "\"" << std::endl;
    fsm = SentenceFSM(); // Reset FSM for new sentence
    fsm.processInput(sentence3);
    fsm.printCurrentState();
    std::cout << std::endl;

    return 0;
}