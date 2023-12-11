#include <bits/stdc++.h>

using namespace std;

// This solution is O(n^2) time complexity and O(1) space complexity
// This solution is not optimal
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int threshold = n / 4;

        for (int i=0; i<n; ++i) {
            int count = 0;
            for (int j=0; j<n; ++j) {
                if (arr[i] == arr[j])   
                    ++count;
            }
            if (count > threshold)
                return arr[i];
        }

        return -1;
    }
};

// This solution is O(n) time complexity and O(1) space complexity
// This solution is optimal
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size(), thres = n/4, freq = 1;
        if (n == 1)
            return arr[0];

        for (int i = 1; i < n; i++) {
            if ( arr[i] == arr[i-1] ) {
                ++freq;
                if (freq > thres)
                    return arr[i];
            }
            else
                freq = 1;
        }
        return -1;
    }
};