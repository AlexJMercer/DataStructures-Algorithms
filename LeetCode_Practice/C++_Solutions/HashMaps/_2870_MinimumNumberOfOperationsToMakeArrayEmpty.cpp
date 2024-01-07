#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i : nums) {
            map[i]++;
        }

        int res = 0;
        for (auto iter : map) {
            int count = iter.second;
            if (count == 1)
                return -1;
            res += count/3;
            if (count % 3)
                res++;
        }
        return res;  
    }
};
