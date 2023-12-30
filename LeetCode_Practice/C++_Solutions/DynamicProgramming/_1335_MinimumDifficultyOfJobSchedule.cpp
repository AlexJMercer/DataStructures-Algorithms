#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int days) {
        int length = jobDifficulty.size();
        if (days > length) return -1;
        
        // Creating a 2D vector to store minimum difficulties for each day and job
        vector<vector<int>> minDifficulties(days, vector<int>(length));
        
        // Initializing values for the first day's minimum difficulties
        for (int i = 1; i < days; ++i) {
            fill(minDifficulties[i].begin(), minDifficulties[i].end(), INT_MAX);
        }
        
        int maxDiff = 0;  // Variable to track maximum difficulty encountered
        int i = 0;
        while (i <= length - days) {
            maxDiff = max(maxDiff, jobDifficulty[i]);
            minDifficulties[0][i] = maxDiff;  // Minimum difficulty for the first day at each job
            ++i;
        }
        
        int currentDay = 1;
        while (currentDay < days) {
            int to = currentDay;
            while (to <= length - days + currentDay) {
                int currentJobDifficulty = jobDifficulty[to];
                int result = INT_MAX;
                int j = to - 1;
                // Loop to find the minimum difficulty for the current day at each job
                while (j >= currentDay - 1) {
                    result = min(result, minDifficulties[currentDay - 1][j] + currentJobDifficulty);
                    currentJobDifficulty = max(currentJobDifficulty, jobDifficulty[j]);
                    --j;
                }
                minDifficulties[currentDay][to] = result;  // Storing the minimum difficulty for the current day at the job
                ++to;
            }
            ++currentDay;
        }
        
        return minDifficulties[days - 1][length - 1];
    }
};