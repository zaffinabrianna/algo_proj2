#include "VibeCheck.h"

int main()
{
    deckGroups temp;
    cout << "Algorithm 2 Test: " << endl;   
    //First Test (should be valid)
    vector<int> hand = { 1, 2, 3, 6, 2, 3, 4, 7, 8 };
    int groupSize = 3;
    cout << "First Test [1, 2, 3, 6, 2, 3, 4, 7, 8]:\n";
    temp.validGroup(hand, groupSize);

    //Second Test (should be invalid)
    cout << "\n";
    vector<int> hand1 = { 1, 2, 3, 3, 4, 5, 6, 7 };
    int groupSize1 = 4;
    cout << "Second Test [1, 2, 3, 3, 4, 5, 6, 7]:\n";
    temp.validGroup(hand1, groupSize1);

    //Third Test (should be invalid)
    cout << "\n";
    vector<int> hand2 = { 1, 2, 3, 3, 4, 5, 6, 7 };
    int groupSize2 = 5;
    cout << "Third Test (Group Size 5) [1, 2, 3, 3, 4, 5, 6, 7]:\n";
    temp.validGroup(hand2, groupSize2);

    //Fourth Test (should be valid)
    cout << "\n";
    vector<int> hand3 = {1, 3, 6, 2, 4, 2, 3, 8, 7};
    int groupSize3 = 3;
    cout << "Fourth Test [1, 3, 6, 2, 4, 2, 3, 8, 7]:\n";
    temp.validGroup(hand3, groupSize3);

    return 0;
}
