#include <iostream>

using namespace std;

// New concise Solution from Daily Challenge
class Solution {
public:
    int climbStairs(int n) {
        long int a = 1, b = 1, temp;
        int i = 0;
        while (i++ < n) {
            temp = a;
            a = a + b;
            b = temp;
        }

        return static_cast<int>(b);
    }
};

// class Solution {
// public:
//     int climbStairs(int n) {
//         if (n == 1)
//             return 1;
//         if (n == 2)
//             return 2;
        
//         int one_step_before = 2;
//         int two_step_before = 1;
//         int allways = 0;

//         for (int i=2; i < n; i++) {
//             allways = one_step_before + two_step_before;
//             two_step_before = one_step_before;
//             one_step_before = allways;
//         }
//         return allways;
//     }
// };

