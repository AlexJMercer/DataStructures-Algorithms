#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fastest solution BUT uses a built in sort function
// Not ideal for interview questions
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        
    }
};

// Slower solution BUT does not use a built in sort function
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;                // According to constraints, all elements
        int secondmax = 0;          // are greater than 0

        for (int i=0; i < nums.size(); ++i) {
            if (nums[i] > max) {
                secondmax = max;
                max = nums[i];
            }
            else if (nums[i] > secondmax) {
                secondmax = nums[i];
            }
        }

        return (max-1)*(secondmax-1);
    }
};