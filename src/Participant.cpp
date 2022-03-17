#include <iostream>
#include <string>
#include <random>
#include "Participant.hpp"

Participant::Participant() : 
    mHand(0) {
}

void Player::Janken() {
       std::cout << "Input your hand number" << std::endl; 
       std::cout << "1:ROCK 2::SCISSORS 3::PAPER"  << std::endl; 
       std::cin >> mHand;
       while (mHand != ROCK && mHand != SCISSORS && mHand != PAPER) {
            std::cout << "Please input valid number..." << std::endl;
            std::cin >> mHand;
        } 
}

void Player::ShowHand(int8_t& playerHand) const {
     playerHand = mHand;
}

void Computer::Janken() {
       std::random_device rnd;
       mHand =  rnd() % 3 + 1;
       std::cout << mHand << std::endl;
    }

void Computer::ShowHand(int8_t& computerHand) const {
    computerHand = mHand;
}
