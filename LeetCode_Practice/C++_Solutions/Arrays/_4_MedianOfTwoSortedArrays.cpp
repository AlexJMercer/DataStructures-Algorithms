// LeetCode Hard Problem

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        int size = m + n;

        if (m > n)
            return findMedianSortedArrays(nums2, nums1);

        int part = (size + 1) / 2;

        if (m == 0)
            return n % 2 ? nums2[n / 2] : (nums2[n / 2] + nums2[n / 2 - 1]) / 2.0;

        if (n == 0)
            return m % 2 ? nums1[m / 2] : (nums1[m / 2] + nums1[m / 2 - 1]) / 2.0;

        int left = 0;
        int right = m;
        int k1, k2;
        int l1, r1, l2, r2;

        do
        {
            k1 = (left + right) / 2;
            k2 = part - k1;

            l1 = k1 == 0 ? INT_MIN : nums1[k1 - 1];
            l2 = k2 == 0 ? INT_MIN : nums2[k2 - 1];
            r1 = k1 >= m ? INT_MAX : nums1[k1];
            r2 = k2 >= n ? INT_MAX : nums2[k2];

            if (l1 <= r2 && l2 <= r1)
                return size % 2 ? max(l1, l2) : (max(l1, l2) + min(r1, r2)) / 2.0;
            else if (l1 > r2)
                right = k1 - 1;
            else
                left = k1 + 1;

        } while (left <= right);

        return 0.0;
    }
};