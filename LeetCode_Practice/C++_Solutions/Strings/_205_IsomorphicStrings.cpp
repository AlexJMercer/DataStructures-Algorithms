#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map1, map2;
        for (int i=0; i < s.length(); i++)
        {
            if (map1.count(s[i]) && map1[s[i]] != t[i])
                return false;
            if (map2.count(t[i]) && map2[t[i]] != s[i])
                return false;
            
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        return true;
    }
};