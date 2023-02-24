#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, result = -1, currSum = 0;

        for (int i=0; i < nums.size(); i++)
            sum += nums[i];

        for (int i=0; i < nums.size(); i++)
        {
            currSum += nums[i];
            if (currSum == sum)
            {
                result = i;
                break;
            }
            sum -= nums[i];
        }
        return result;
    }
};