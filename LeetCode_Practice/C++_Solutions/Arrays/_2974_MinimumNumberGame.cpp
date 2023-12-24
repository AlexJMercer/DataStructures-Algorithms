#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr(nums.size(), 0);
        
        for (int i=1; i < nums.size(); i += 2) {
            arr[i-1] = nums[i]; arr[i] = nums[i-1];
        }
        
        return arr;
    }
};