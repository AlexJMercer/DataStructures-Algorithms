#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {        
        h.push_back(1);
        h.push_back(m);
        v.push_back(1);
        v.push_back(n);

        sort(h.begin(), h.end());
        sort(v.begin(), v.end());

        long long e = -1;
        unordered_set<int> set;

        for (int i = 0; i < h.size(); ++i) {
            for (int j = i + 1; j < h.size(); ++j) {
                set.insert(h[j] - h[i]);
            }
        }

        for (int i = 0; i < v.size(); ++i) {
            for (int j = i + 1; j < v.size(); ++j) {
                int l = v[j] - v[i];
                if (set.count(l)) {
                    e = max(e, (long long) l);
                }
            }
        }
        
        if (e == -1) {
            return -1;
        }
        return e * e % 1000000007;
    }
};