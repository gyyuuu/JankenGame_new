#ifndef RLAYER_H
#define RLAYER_H

#include <string>

class Player{
private:
    std::string m_type; 
public:
   explicit Player(std::string playerType);
   int hand;
   int Janken();
   void ShowHand(int hand);
};

#endif