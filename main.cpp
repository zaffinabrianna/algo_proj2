#include "VibeCheck.h"

int main()
{
    deckGroups temp;

    //First Test (should be valid)
    vector<int> hand = { 1, 2, 3, 6, 2, 3, 4, 7, 8 };
    int groupSize = 3;
    cout << "First Test [1, 2, 3, 6, 2, 3, 4, 7, 8]:\n";
    temp.validGroup(hand, groupSize);

    //Second Test (should be invalid)
    vector<int> hand1 = { 1, 2, 3, 3, 4, 5, 6, 7 };
    int groupSize1 = 4;
    cout << "Second Test [1, 2, 3, 3, 4, 5, 6, 7]:\n";
    temp.validGroup(hand1, groupSize1);

    return 0;
}