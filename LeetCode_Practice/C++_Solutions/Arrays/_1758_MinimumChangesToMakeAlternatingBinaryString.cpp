#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int size = s.length(), res=0;

        for (int i=0; i < size; i++) {
            if (s[i] - '0' != i%2)
                res++;
        }

        return min(res, size - res);
    }
};