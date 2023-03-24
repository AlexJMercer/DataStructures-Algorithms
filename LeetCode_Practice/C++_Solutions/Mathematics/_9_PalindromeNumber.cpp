#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int temp = x;
        while (temp > 0) 
        {
            rev = (rev*10) + (temp%10);
            temp = temp/10;
        }
        if (rev == x && x >= 0)
            return true;
        else
            return false;
    }
};