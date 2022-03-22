#include "JankenGame.hpp"
#include "Player.hpp"

namespace Janken {
    JankenGame::JankenGame() : 
        mGameCount(0){
    }
    JankenGame::~JankenGame() {
    }

    void JankenGame::Play() {
        JankenPlayer::Player player;
        const int32_t MAXGAMECOUNT= 3;

        std::cout << "Start Janken Game" << std::endl;
    
        for(int i = 0; mGameCount < MAXGAMECOUNT; i++) {
            player.Janken();
            mGameCount++;
        }
   
        player.DisplayFinalJudgeResult();

        std::cout << "End Jyanken Game" << std::endl;
    }
}
