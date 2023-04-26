#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int sumOdd = 0, sumEven = 0;
        for (int i=0; i < nums.size(); i++) {
            if (i%2)
                sumEven = max(sumEven + nums[i], sumOdd);
            else
                sumOdd = max(sumOdd + nums[i], sumEven);
        }
        return (sumEven >= sumOdd) ? sumEven : sumOdd;
    }
};