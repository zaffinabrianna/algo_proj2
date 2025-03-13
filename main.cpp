#include "VibeCheck.h"

int main()
{
    deckGroups temp;
    vector<int> hand = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    int groupSize = 3;

    temp.validGroup(hand, groupSize);

    return 0;
}