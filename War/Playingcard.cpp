#include "Playingcard.h"

Rank Playingcard::getRank()
{
	return Rank();
}

Suit Playingcard::getSuit()
{
	return Suit();
}

Playingcard::Playingcard(Rank r, Suit s)
{
	this->rank = r;
	this->suit = s;
}
