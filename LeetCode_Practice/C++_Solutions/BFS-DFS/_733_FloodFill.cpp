#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int curVal, int color) {
        if (i < 0 || 
            i >= image.size() || 
            j >= image[0].size() || 
            image[i][j] == color ||
            image[i][j] != curVal)
        {
            return;
        }

        image[i][j] = color;
        dfs(image, i+1, j, curVal, color);
        dfs(image, i-1, j, curVal, color);
        dfs(image, i, j+1, curVal, color);
        dfs(image, i, j-1, curVal, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        dfs(image, sr, sc, val, color);
        return image;
    }
};