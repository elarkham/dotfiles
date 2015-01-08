#ifndef _HAND_H
#define _HAND_H

#include "deck.h"
#include <vector>
using namespace std;

class Hand
{
  private:
    vector<Card> myCards;

  public:
    Hand();

    void dealFrom(Deck& d);

    void print() const;
};

#endif
