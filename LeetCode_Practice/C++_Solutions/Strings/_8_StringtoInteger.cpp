#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        double num = 0;
        int i=0;
        bool sign = 1;
        while (s[i] == ' ')
            i++;
        
        if (s[i] == '+' || s[i] == '-')
        {
            if (s[i] == '-')
                sign = 0;
            i++;
        }

        while(i < s.size() && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        num = (sign) ? num : -num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return num;
    }
};