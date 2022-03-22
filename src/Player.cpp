#include <iostream>
#include <string>
#include <random>
#include "Player.hpp"

namespace JankenPlayer {
    Player::Player() : 
        mPlayerHand(0),mWinCount(0),mLoseCount(0) {
    }

    Player::~Player() {
    }

    void Player::Janken() noexcept {
        std::cout << "Input your hand number" << std::endl; 
        std::cout << "1:ROCK 2::SCISSORS 3::PAPER"  << std::endl; 
        std::cin >> mPlayerHand;
        while (mPlayerHand != ROCK && mPlayerHand != SCISSORS && mPlayerHand != PAPER) {
            std::cout << "Please input valid number..." << std::endl;
            std::cin >> mPlayerHand;
        }

        JudgeResult(mPlayerHand);
    }

    void Player::JudgeResult(int32_t mPlayerHand) noexcept {
        std::random_device rnd;
        int32_t computerHand = rnd() % 3 + 1;
        std::cout << computerHand << std::endl;
    
        int32_t resultHand = mPlayerHand - computerHand;

        auto Judge = [=](){ return ((resultHand + 3) % 3); };
        int32_t result = Judge();
        switch(result){
            case 0 : 
                std::cout << "Draw!!" << std::endl;
                break;
            case 1 : 
                std::cout << "Computre win!!" << std::endl;
                mLoseCount++;
                break;
            case 2 : 
                std::cout << "Player win!!" << std::endl;
                mWinCount++;
                break;
            default:
                break;
        }
    }

    void Player::DisplayFinalJudgeResult() const noexcept {
        std::vector <std::string> resultMessageType = {"final winner is Player", "final winner is Computer", "Draw!!"};
    
        if ( mWinCount > mLoseCount) {
            std::cout << resultMessageType[MT_W] << std::endl;
            return;
        } 
        if ( mWinCount < mLoseCount ) {
            std::cout << resultMessageType[MT_L] << std::endl;
            return;
        }
        std::cout << resultMessageType[MT_D] << std::endl;
    }
}
