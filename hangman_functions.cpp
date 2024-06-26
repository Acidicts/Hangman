#include <iostream>
#include <vector>
#include "hangman_functions.h"

//define functions

void greet(){

    std::cout << "=================\n";
    std::cout << "Hangman: The Game\n";
    std::cout << "=================\n";
    std::cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword.\n";
}


void display_misses(int misses)
{
    std::string hangman[] = {
        "  +---+ \n  |   | \n      | \n      | \n      | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n      | \n      | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n  |   | \n      | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n /|   | \n      | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n /|\\  | \n      | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n /|\\  | \n /    | \n      | \n ========= \n",
        "  +---+ \n  |   | \n  O   | \n /|\\  | \n / \\  | \n      | \n ========= \n"
    };

    std::cout << hangman[misses];
}

void display_status(std::vector<char> incorrect, std::string answer) {
    std::cout << "Incorrect Guesses: \n";

    for (int i = 0; i<incorrect.size(); i++) {
        std::cout << incorrect[i] << " ";
    }

    std::cout << "Codeword:\n";

    for (int i = 0; i<answer.length(); i++) {
        std::cout<<answer[i]<<" ";
    }

    std::cout << "\n";
}

void end_game(std::string answer, std::string codeword) {
    if (answer==codeword) {
        std::cout<<"The word was" << codeword;
        std::cout<<"Hooray you saved the person \n";
        std::cout<<"Congratulation";
    }
    else {
        std::cout<<"We didn't save him";
    }
}

