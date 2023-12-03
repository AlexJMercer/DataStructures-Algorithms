#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int slowPtr = 0, fastPtr = height.size() - 1;

        while (slowPtr < fastPtr) {
            maxArea = max(maxArea, min(height[slowPtr], height[fastPtr]) * (fastPtr - slowPtr));

            if (height[slowPtr] < height[fastPtr])
                slowPtr++;
            else
                fastPtr--;
        }

        return maxArea;
    }

};