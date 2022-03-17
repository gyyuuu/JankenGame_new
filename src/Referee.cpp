#include <iostream>
#include "Referee.hpp"

Referee::Referee() : 
    mPlayerWinCount(0), mComputerWinCount(0) {

}

void Referee::Judge(int8_t playerHand, int8_t computerHand) {
    if ((playerHand== ROCK && computerHand == SCISSORS)
       || (playerHand== SCISSORS && computerHand== PAPER)
       || (playerHand== PAPER && computerHand== ROCK)) {
            mPlayerWinCount++; 
            std::cout << "player win!" << std::endl;
    }
    else if ((computerHand== ROCK && playerHand== SCISSORS)
        || (computerHand== SCISSORS && playerHand== PAPER)
        || (computerHand== PAPER && playerHand== ROCK)) {
            mComputerWinCount++; 
            std::cout << "Computer win!" << std::endl;
    }
    else {
        std::cout << "Draw!" <<  std::endl;
    } 
}

void Referee::FinalJudge() {
    if (mPlayerWinCount > mComputerWinCount) {
        std::cout << "final winner is player" << std::endl;
    } 
    else if (mComputerWinCount > mPlayerWinCount) {
        std::cout << "final winner is computer" << std::endl;
    }
    else {
        std::cout << "Draw!!" << std::endl;
    }
}
