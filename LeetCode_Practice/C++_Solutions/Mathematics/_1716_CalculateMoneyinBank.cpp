#include <iostream>

using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int totalMoney = 0, numOfWeeks = (n / 7);

        for (int i = 1; i <= numOfWeeks; i++)
            totalMoney += 7*(i + 3);            // Sum of numbers in an AP 

        for (int i = 7*numOfWeeks; i < n; i++)
            totalMoney += ++numOfWeeks;

        return totalMoney;
    }   
};