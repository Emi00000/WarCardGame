#include "Deck.h"

void Deck::addCard(Playingcard c)
{
    if (this->nrOfCards < 52)
    {
        this->deck[this->nrOfCards] = c;
        this->nrOfCards++;
    }
}

Playingcard Deck::remove()
{
    if (this -> nrOfCards > 0) {
        Playingcard p = this -> deck[0];
        for (int i = 1; i < this -> nrOfCards; i++)
            this -> deck[i - 1] = this -> deck[i];
        return p;
    }
}

void Deck::shuffle()
{
}
