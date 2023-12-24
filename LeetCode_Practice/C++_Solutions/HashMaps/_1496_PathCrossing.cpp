#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> set;
        set.insert({0,0});    // start visited
        int x=0, y=0;
        for (char c : path) {
            if (c == 'N')
                y++;
            else if (c == 'E')
                x++;
            else if (c == 'W')
                x--;
            else
                y--;

            if (set.find({x,y}) != set.end())
                return true;
            else
                set.insert({x,y});
        }

        return false;
    }
};