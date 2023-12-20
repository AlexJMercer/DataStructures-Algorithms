#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size(), repeated = 0;
        unordered_set<int> map;

        int sum = 0, expSum = (n*n * (n*n + 1)) / 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                if ( map.find(grid[i][j]) != map.end() )
                    repeated = grid[i][j];
                
                map.insert(grid[i][j]);
            }
        }

        return {repeated, expSum - sum + repeated};
    }
};