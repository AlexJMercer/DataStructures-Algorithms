#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        // Iterative solution:
        // int count = 0;
        // for (int i=0; i < 32; ++i) {
        //     count += (n & 1);
        //     n = (n >> 1);
        // }
        // return count;

        // Recursive solution:
        return (n == 0) ? 0 : (n & 1) + hammingWeight(n >> 1);
    }
};