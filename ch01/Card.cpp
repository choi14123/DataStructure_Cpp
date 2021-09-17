#include "Card.h"
#include <iostream>

using namespace std;

Card::Card(void)
{
    Colors = red;
    eSval = diamond;
    nRval = 7;
    bFaceup = true;
}

Card::~Card(void) {}

bool Card::IsFaceUp()
{
    return bFaceup;
}

int Card::Rank()
{
    return nRval;
}

void Card::SetRank(int x)
{
    nRval = x;
}


void Card::Draw()
{
    cout << eSval << endl;
    cout << nRval << endl;
    cout << bFaceup << endl;

}

void Card::Flip()
{
    if (bFaceup == true)
        bFaceup = false;
    else
    bFaceup = true;

}