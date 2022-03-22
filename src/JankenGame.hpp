#pragma once
#include <iostream>

namespace Janken {
    class JankenGame {
    private:
        int32_t mGameCount;

    public:
        JankenGame();
        ~JankenGame();
        void Play();
    };
}
