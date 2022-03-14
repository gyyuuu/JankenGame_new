#ifndef REFEREE_H
#define REFEREE_H

class Referee {

private:
    int playerWinCount;
    int computerWinCount;
    const int ROCK = 1;
    const int SCISSORS = 2;
    const int PAPER = 3;

public:
    Referee();
    void StartGame();
    void Judge(int playerHand, int computerHand);
    void FinalJudge();
    void EndGame();
};

#endif