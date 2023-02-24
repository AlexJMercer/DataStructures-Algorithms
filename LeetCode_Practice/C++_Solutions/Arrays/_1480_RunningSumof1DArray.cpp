#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int runningSum = 0;

        for (int i=0; i < nums.size(); i++)
        {
            runningSum += nums[i];
            res.push_back(runningSum);
        }

        return res;
    }
};