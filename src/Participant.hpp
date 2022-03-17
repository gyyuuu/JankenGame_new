#pragma once
#include <string>

class Participant {
protected:
    int8_t mWinCount;
    int8_t mHand;
    const int8_t ROCK = 1;
    const int8_t SCISSORS = 2;
    const int8_t PAPER = 3;
public:
    Participant(); 
    virtual void Janken() = 0;
    virtual void ShowHand(int8_t& hand) const = 0;
};

class Player : Participant {
public:
    using Participant::Participant;
    void Janken() override; 
    void ShowHand(int8_t& playerHand) const override;
};

class Computer : Participant {
public:
    using Participant::Participant;
    void Janken() override; 
    void ShowHand(int8_t& computerHand) const override;
};
