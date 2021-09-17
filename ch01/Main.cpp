#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    Card MyCard;

    MyCard.Flip();

    cout << MyCard.Rank();
    return 0;
}