#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0)
            x = 1/x;
        
        long num = labs(n);    
        double res = 1;
    
        while(num)
        {    
            if(num & 1) {
                res *= x;
            }   
            x *= x;
            num >>= 1;
        }
        return res;
    }
};