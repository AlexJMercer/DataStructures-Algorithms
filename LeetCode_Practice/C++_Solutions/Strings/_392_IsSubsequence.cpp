#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        /*

        Code from first try

        int i=0, j=0;
        while (s[j] && t[i])
        {
            if ( !(s[j] || t[i]) )
                return false;
            if (s[j] == t[i])
            {
                j++;
            }
            i++;
        }
        if (j != s.length())
            return false;
        else
            return true;
        */

       // Updated, cleaner code
       int i = 0, j = 0;
        for ( ; i < s.length() && j < t.length(); j++)
        {
            if (s[i] == t[j])
                i++;
        }
        return (i == s.length());
    }
};