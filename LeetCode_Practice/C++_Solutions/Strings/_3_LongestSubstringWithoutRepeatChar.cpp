#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "")
            return 0;

        int count = 0, j = 0, len = s.length();
        map<char, int> mp;

        for (int i=0; i < len; i++) 
        {
            char c = s[i];
            mp[c]++;
            while (mp[c] > 1)
            {
                mp[s[j]]--;
                j++;
            }
            count = max(count, i-j+1);
        }
        return count;
    }
};