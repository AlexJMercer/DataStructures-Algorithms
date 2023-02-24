#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i=0, sign = 1;
        long long int num = 0;
        while (s[i] == ' ')
            i++;

        if (s[i] == '+' || s[i] == '-')
        {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < s.length())
        {
            if (s[i] < '0' || s[i] > '9')
                break;    
            
            num = num*10 + (int)(s[i] - '0');
            i++;
        }

        if (num > INT_MAX)
            return sign*INT_MAX;
        else if (num < INT_MIN)
            return sign*INT_MIN;
        else
            return sign*num;
    }
};