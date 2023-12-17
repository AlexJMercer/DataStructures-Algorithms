#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> start;
        
        for (auto& i : paths)
            start.insert(i[0]);
            
        for (auto& i : paths)
            if ( start.count(i[1]) == 0 )
                return i[1];

        return "";
    }
};