#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), res=0;
        vector<int> rows(m, 0), cols(n, 0);

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                if (mat[i][j]) {
                    rows[i]++;
                    cols[j]++;
                }
            }
        }

        for (int i=0; i < m; ++i) {
            for (int j=0; j < n; ++j) {
                if (mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1)
                    res++;
            }
        }

        return res;
    }
};