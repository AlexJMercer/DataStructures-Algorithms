#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        if (s.size() == 0)
            return 0;
        unordered_map<char, int> map;
        bool flag = false;

        for (int i=0; i < s.size(); i++)
            map[s[i]]++;     
        
        int sum = 0;
        for (auto it : map)
        {
            int x = it.second;
            if (x % 2 == 0)
                sum += x;
            else
            {
                x--;
                flag = true;
                sum += x;
            }   
        }
        if (flag)
            return sum+1;
        else
            return sum;
    }
};