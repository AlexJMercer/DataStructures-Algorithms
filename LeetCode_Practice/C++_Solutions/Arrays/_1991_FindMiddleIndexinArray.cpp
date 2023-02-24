#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0, ans = -1;

        for(int i=0; i < nums.size(); i++)
            sum += nums[i];

        int curr = 0;
        for (int i=0; i < nums.size(); i++)
        {
            curr += nums[i];
            if (curr == sum)
            {
                ans = i;
                break;
            }
            sum -= nums[i];
        }
        return ans;
    }
};