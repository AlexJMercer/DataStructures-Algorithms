#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> square;
    void makeSquares(int num) {
        square.push_back(num*num);
    }

    vector<int> sortedSquares(vector<int>& nums) {
        for (int n:nums) {
            makeSquares(n);
        }
        sort(square.begin(), square.end());
        return square;
    }
};