#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) { return 0; }
            
        int totalArithmetic = 0;
        for (int i = 0; i < n - 2; ++i) {
            int diff = nums[i + 1] - nums[i];
            for (int j = i + 2; j < n; ++j) {
                if (nums[j] - nums[j - 1] == diff) {
                    totalArithmetic++;
                } else {
                    break;
                }
            }
        }
        return totalArithmetic;
    }
};