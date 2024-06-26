#include <iostream>
#include <vector>
#include "hangman_functions.h"

using namespace std;

int main() {
    greet();

    string codeword = " ";
    std::cout << "Choose the word: \n";
    cin >> codeword;
    string answer(codeword.length(), '_');

    int misses = 0;
    vector<char> incorrect;
    vector<char> guessed;
    bool guess = false;
    bool pass = false;
    char letter;


    while (answer!=codeword && misses < 7) {
        display_misses(misses);
        display_status(incorrect, answer);

        std:cout << "\n\nPlease enter your guess: ";
        cin >> letter;

        for (char i : guessed) {
            if (letter==i) {
                    std::cout << "You guessed this already";
                    pass = true;
            }
        }

        if (not pass) {
            for (int i=0; i<codeword.length(); i++) {
                if (letter==codeword[i]) {
                    answer[i] = letter;
                    guess = true;
                }
            }
            if (guess) {
                std::cout<<"\nCorrect\n";
            }
            else {
                std::cout<<"\nIncorrect a new portion of the person has been drawn\n";
                incorrect.push_back(letter);
                misses ++;
                }
            guess = false;
            pass = false;
        }
    }

    end_game(answer, codeword);
    return 0;
}
