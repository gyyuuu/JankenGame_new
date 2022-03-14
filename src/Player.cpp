#include "Player.hpp"

#include <iostream>
#include <string>
#include <random>
Player::Player(std::string playerType) : 
    m_type(playerType){
        hand = 0;
}

int Player::Janken() {
    if (m_type == "Player") {
        std::cout << "Input your hand number" << std::endl; 
        std::cout << "1:ROCK 2::SCISSORS 3::PAPER"  << std::endl; 
        std::cin >> hand;
        while (hand != 1 && hand != 2 && hand != 3) {
            std::cout << "Please input valid number..." << std::endl;
            std::cin >> hand;
        }
    }
    else if (m_type == "Computer") {
       std::random_device rnd;
       hand =  rnd() % 3 + 1;
       std::cout << hand << std::endl;
    }
    
    return hand;
}

void Player::ShowHand(int hand) {
     //switch (hand) {
        //case 1:
            //std::cout << m_type +  " hand is ROCK!"  << std::endl;
        //case 2:
            //std::cout << m_type +  " hand is SCISSORS!"  << std::endl;
        //case 3:
            //std::cout << m_type +  " hand is PAPAER!"  << std::endl;
        //default:
            //std::cout << m_type +  "hand is invalid" << std::endl;
     //}
}