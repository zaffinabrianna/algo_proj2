// Brianna Zaffina
// CPSC 335
// Professor Bhandari
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


class deckGroups
{
    private:
        int groupSize;
        vector<int> temp;

    public:
        //Default Constructor
        deckGroups() : groupSize(0), temp() {}
        //Destructor
        ~deckGroups() {}

        //Sees if the array and groupsize is valid
        bool isValid(vector<int> temp, int groupSize)
        {
            //Check to see if the size is valid first
            if (temp.empty() || temp.size() > 105)
            {
                cout << "Your array size is invalid\n";
                return false;
            }

            //Check to see if group size is valid
            if (groupSize < 1)
            {
                cout << "Your group size is not valid\n";
                return false;
            }
            
            //Check if the vector can even be divided into equal groups of groupSize
            if (temp.size() % groupSize != 0 )
            {
                cout << "Your group is not valid, cannot be divided into even groups\n";
                return false;
            }

            return true;
        }

        //Sees if the vector "group" of cards is valid
        bool validGroup(vector<int> temp, int groupSize)
        {
             //Check if first parameters are valid
             if (!isValid(temp, groupSize))
             {
                return false;
             }
             
            //Sort the vector first
            sort(temp.begin(), temp.end());
            
            //Make a map to store the values
            unorderd_map<int, vector<int>>  groupStorage;

            //If the values are repeated store them in a diff
            for (auto i : temp)
            {
                groupStorage[i].push_back(i);
            }          

            //If the nested for-loop iteratoes fully without issues, it is valid
            //and returns true
            cout << "Your group is valid!\n";
            return true;
        }
        
        //Function to make vector groups:
        //{

        //}
};