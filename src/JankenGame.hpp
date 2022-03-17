#pragma once
#include <iostream>

class JankenGame {
private:
    int8_t mGameCount;
    const int8_t MAXGAMECOUNT= 3;  

public:
    void PlayGame();
};
