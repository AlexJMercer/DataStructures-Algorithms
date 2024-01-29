#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int left = 0, right = 0;
        int mid = s.size() / 2;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0, j = mid; i < mid; ++i, ++j) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                left++;
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                right++;
        }
        return (left == right) ? true : false;
    }
};