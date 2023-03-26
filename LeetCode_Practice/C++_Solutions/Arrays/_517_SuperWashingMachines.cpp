// Hard Problem

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int accu = 0, max = INT_MIN, n = machines.size();
        int sum = accumulate(machines.begin(), machines.end(), 0);
        int target = sum/n;
        
        if (sum % n != 0)
            return -1;
        
        for(int i=0; i < n; i++)
        {
            accu += (machines[i] - target);
            if (abs(accu) > max)
                max = abs(accu);
            if (machines[i] - target > max)
                max = machines[i] - target;
        }
        return max;
    }
};