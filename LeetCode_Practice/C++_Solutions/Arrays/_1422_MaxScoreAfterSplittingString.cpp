#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int right = 0, left = 0, score = 0; 

        for (char c : s) {
            if (c == '1')
                right++;
        }

        for (int i=0; i < n-1; ++i) {
            if (s[i] == '0')
                left++;
            else
                right--;
            score = max(score, left + right);
        }

        return score;
    }
};