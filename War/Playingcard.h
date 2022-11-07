#pragma once
enum class Rank
{
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JACK = 12,
    QUEEN = 13,
    KING = 14,
    ACE = 15

};
enum class Suit
{
    HEARTS = 1,
    CLUBS = 2,
    DIAMONDS = 3,
    SPADES = 4
};
class Playingcard
{
private:
    Rank rank;
    Suit suit;
public:
     Rank getRank();
     Suit getSuit();
     Playingcard();
     Playingcard(Rank r,Suit s);


};

