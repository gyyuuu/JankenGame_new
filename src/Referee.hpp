#pragma once
#include <iostream>

class Referee {
private:
    int8_t mPlayerWinCount;
    int8_t mComputerWinCount;
    const int8_t ROCK = 1;
    const int8_t SCISSORS = 2;
    const int8_t PAPER = 3;
public:
    Referee();
    void Judge(int8_t playerHand, int8_t computerHand);
    void FinalJudge();
};

