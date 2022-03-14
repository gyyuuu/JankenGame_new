#include "Referee.hpp"

#include <iostream>

Referee::Referee(){
    playerWinCount = 0;
    computerWinCount = 0;
};

void Referee::StartGame() {
    std::cout << "Start Jyanken Game!" << std::endl;
} 

void Referee::Judge(int playerHand, int computerHand) {
    if ((playerHand == ROCK && computerHand == SCISSORS)
            || (playerHand == SCISSORS && computerHand == PAPER)
                || (playerHand == PAPER && computerHand == ROCK)) {
                   playerWinCount++; 
                   std::cout << "player win!" << std::endl;
    }
    else if ((computerHand == ROCK && playerHand == SCISSORS)
            || (computerHand == SCISSORS && playerHand == PAPER)
                || (computerHand == PAPER && playerHand == ROCK)) {
                   computerWinCount++; 
                   std::cout << "Computer win!" << std::endl;
    }
    else {
        std::cout << "Draw!" <<  std::endl;
    } 
}

void Referee::FinalJudge() {
    if (playerWinCount > computerWinCount){
        std::cout << "final winner is player" << std::endl;
    } 
    else if (computerWinCount > playerWinCount){
        std::cout << "final winner is computer" << std::endl;
    }
    else {
        std::cout << "Draw!!" << std::endl;
    }
}

void Referee::EndGame() {
    std::cout << "End Jyanken Game" << std::endl;
}