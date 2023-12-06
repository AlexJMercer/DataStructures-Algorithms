#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfMatches(int teams) {
        int numOfMatches = 0;

        while (teams > 1) {
            if (teams % 2 == 0) {         // even
                numOfMatches += ( teams/2 );
                teams /= 2;
            }
            else {
                numOfMatches += ( (teams-1)/2 );
                teams = ((teams-1)/2) + 1;
            }
        }
        return numOfMatches;
    }
};