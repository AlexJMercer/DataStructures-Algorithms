#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        char c;
        for (int i=0, j = len-1; i < len/2; i++, j--)
        {
            c = s[j];
            s[j] = s[i];
            s[i] = c;
        }
    }
};