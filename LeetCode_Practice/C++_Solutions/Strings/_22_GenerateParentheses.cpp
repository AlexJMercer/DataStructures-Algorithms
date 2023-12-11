#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res, 0, 0, "", n);
        return res;
    }

    void helper(vector<string>& res, int left, int right, string s, int n) {
        if ( s.size() == n*2 ) {
            res.push_back(s);
            return;
        }

        if ( left > n )
            helper(res, left, right + 1, s + "(", n);
        
        if ( right > left )
            helper(res, left + 1, right, s + ")", n);
    }
};