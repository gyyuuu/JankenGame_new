#include "Player.hpp"
#include "Referee.hpp"

#include <iostream>
int main() {
    Referee referee;
    Player player("Player");
    Player computer("Computer");
    referee.StartGame();
    
    for(int i = 0; i < 3; i++) {
        player.hand = player.Janken();
        computer.hand = computer.Janken();
        player.ShowHand(player.hand);
        computer.ShowHand(computer.hand);
        referee.Judge(player.hand, computer.hand);
    }
    referee.FinalJudge();
    
    referee.EndGame();
}
