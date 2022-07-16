#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        vector<int> TwoSum (vector<int> &nums, int target)
        {
            unordered_map<int, int> map;
            for (int i = 0; i < nums.size(); i++)
            {
                if (map.find(target - nums[i]) != map.end())
                    return {map[target - nums[i]], i};
                map[nums[i]] = i;
            }
            return {};
        }
};