#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int, int> map;
        
        for (int i : nums) {
            map[i]++;
        }

        while (!map.empty()) {
            vector<int> temp;
            for (auto iter = map.begin(); iter != map.end(); ) {
                temp.push_back(iter->first);
                iter->second--;

                if (iter->second == 0)
                    iter = map.erase(iter);
                else
                    iter++;
            }
            res.push_back(temp);
        }
        return res;
    }
};