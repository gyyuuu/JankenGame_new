#pragma once
#include <string>

namespace JankenPlayer {
    class Player{
    protected:
        int32_t mWinCount;
        int32_t mLoseCount;
        int32_t mPlayerHand;
        enum handType {
            ROCK = 1,
            SCISSORS,
            PAPER,
        };
        enum messageType {
            MT_W,
            MT_L,
            MT_D,
        };

    public:
        Player();
        ~Player();
        void Janken() noexcept; 
        void JudgeResult(int32_t mPlayerHand) noexcept;
        void DisplayFinalJudgeResult() const noexcept;
    };
}
