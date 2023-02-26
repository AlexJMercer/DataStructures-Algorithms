#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX, maxProfit = 0, currProfit = 0;
        for (int i=0; i < prices.size(); i++)
        {
            if (prices[i] < low)
                low = prices[i];

            currProfit = prices[i] - low;
            if (currProfit > maxProfit)
                maxProfit = currProfit;
        }
        return maxProfit;
    }
};