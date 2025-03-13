// Brianna Zaffina
// CPSC 335
// Professor Bhandari
#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class deckGroups
{
    private:
        int groupSize;
        vector<int> hand;

    public:
        //Default Constructor
        deckGroups() : groupSize(0), hand() {}
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
            //Create a new group for this vector
            vector<int> group;
            //Create counters
            int i = 0;
            int j = 1;

            // do - while
            do
            {
                //They are subtracted to see if their difference is 1
                if (temp[i] - temp[j] == 1)
                {
                    //Push this into a new vector
                    group.push_back(i);
                }

                i++;
                j++;

            } while(i != temp.size());

            if (i == temp.size() && group.size() != temp.size())
            {
                cout << "The group is not valid\n";
                return false;
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