#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size(), index = 0, temp;
        if (len == 0)
            return;

        for (int i=0; i < len; i++)
        {
            if (nums[i] != 0)
            {
                temp = nums[index];
                nums[index++] = nums[i];
                nums[i] = temp;
            }
        }
    }
};