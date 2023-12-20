#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = 0, largest2 = 0, smallest = INT_MAX, smallest2 = INT_MAX;

        for (int n : nums) {
            if (n < smallest) {
                smallest2 = smallest;
                smallest = n;
            } else if (n < smallest2) {
                smallest2 = n;
            }

            if (n > largest) {
                largest2 = largest;
                largest = n;
            } else if (n > largest2) {
                largest2 = n;
            }
        }
        return (largest*largest2) - (smallest*smallest2);
    }
};