#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> arr(len);
        if (len == 0 || k <= 0)
            return;
        
        for (int i=0; i < len; i++)
            arr[i] = nums[i];

        for (int i=0; i < len; i++)
            nums[(i+k)%len] = arr[i];
    }
};