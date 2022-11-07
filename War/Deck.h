#pragma once
#include "PlayingCard.h"
class Deck
{
private:
	Playingcard deck[52];
	int nrOfCards = 0;
public:
	void addCard(Playingcard c);
	Playingcard remove();
	void shuffle();
};

