#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int traversal(vector<vector<int>>& grid, int i, int j) {
        if (i < 0 ||
            j < 0 ||
            i >= grid.size() ||
            j >= grid[0].size() ||
            grid[i][j] == 0)
        {
            return 0;
        }

        grid[i][j] = 0;
        return (1 +
                traversal(grid, i+1, j) +
                traversal(grid, i-1, j) +
                traversal(grid, i, j+1) +
                traversal(grid, i, j-1));
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        for (int i=0; i < grid.size(); i++)
        {
            for (int j=0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                    res = max(res, traversal(grid, i, j));
            }
        }
        return res;
    }
};