#include "JankenGame.hpp"
#include "Participant.hpp"
#include "Referee.hpp"

void JankenGame::PlayGame() {
    Referee referee;
    Player player;
    Computer computer;
    int8_t playerHand = 0;
    int8_t computerHand = 0;

    std::cout << "Start Janken Game" << std::endl;
    
    for(int i = 0; mGameCount < MAXGAMECOUNT; i++) {
        player.Janken();
        computer.Janken();
        player.ShowHand(playerHand);
        computer.ShowHand(computerHand);
        referee.Judge(playerHand, computerHand);
    }
    referee.FinalJudge();

    std::cout << "End Jyanken Game" << std::endl;
}
