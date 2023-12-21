#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int num = points.size(), width = INT_MIN;
        sort(points.begin(), points.end());
        for (int i=1; i < num; ++i) {
            width = max( points[i][0] - points[i-1][0], width );
        }

        return width;
    }
};