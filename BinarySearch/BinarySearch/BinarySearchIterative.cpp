#include <iostream>
#include <vector>

using namespace std;

int binarySearchIterative(vector<int> vctr, int target) 
{
    int min = 0;
    int max = vctr.size() - 1;

    while (min < max) 
    {
        int guess = (min + max) / 2;

        if (vctr.at(guess) == target) 
        {
            return guess;
        }
        else if (vctr.at(guess) < target) 
        {
            min = guess + 1;
        }
        else 
        {
            max = guess - 1;
        }
    }

    return -1;
}