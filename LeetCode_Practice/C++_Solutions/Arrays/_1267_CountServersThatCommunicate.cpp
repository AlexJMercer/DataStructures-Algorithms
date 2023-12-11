#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(), 0), cols(grid[0].size(), 0);
        int m = grid.size(), n = grid[0].size(), connComps = 0;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0)
                    continue;
                rows[i]++;
                cols[j]++;                    
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if ( grid[i][j] == 0) 
                    continue;
                if (( cols[j] > 1 ) || ( rows[i] > 1 ))  {
                    connComps++;
                }
            }
        }

        return connComps;
    }   
};