#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int numOfPoints = points.size();
        int secondsTaken = 0;

        for (int i=1; i < numOfPoints; i++) {
            secondsTaken += max(abs(points[i][1] - points[i - 1][1]), abs(points[i][0] - points[i - 1][0]));
        }

        return secondsTaken;
    }
};