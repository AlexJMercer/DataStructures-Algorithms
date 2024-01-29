#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup, realSum = 0, expectedSum = n * ( n + 1 ) / 2;
        vector<bool> v(n, false);   

        for (int i=0; i < n; ++i) {
            realSum += nums[i]; 
            if ( v[ nums[i] ] != true )
                v[ nums[i] ] = true;
            else
                dup = nums[i];
        }
        
        return { dup, expectedSum - realSum + dup };
    }
};