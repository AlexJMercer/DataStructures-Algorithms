#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = endTime.size();
        vector<pair<int, int>> start(n);
        vector<int> dp(n+1, 0);

        for (int i=0; i < n; ++i)
            start[i] = { startTime[i], i };
        
        sort(start.begin(), start.end());
        for (int i = n-1; i >= 0; --i) {
            dp[i] += max(dp[i+1], profit[start[i].second]
                   + dp[lower_bound(start.begin() + i, start.end(), make_pair(endTime[start[i].second], 0)) - start.begin()]);
        }
        return dp[0];
    }
};