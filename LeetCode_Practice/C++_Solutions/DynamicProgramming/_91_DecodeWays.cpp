#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    // int numDecodings(string s) {
    //     int n = s.size();
    //     vector<int> dp(n + 1);
    //     dp[n] = 1;
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         if (s[i] == '0')
    //             dp[i] = 0;
    //         else
    //         {
    //             dp[i] = dp[i + 1];
    //             if (i < n - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7'))
    //                 dp[i] += dp[i + 2];
    //         }
    //     }
    //     return s.empty() ? 0 : dp[0];
    // }

    int helper(int ind, string s)
    {
        if (ind == s.length())
        {
            return 1;
        }

        int op1 = helper(ind + 1, s);
        if (s[ind] == '0')
        {
            op1 = 0;
            return 0;
        }

        int op2 = 0;
        int str = stoi(s.substr(ind, 2));

        if (ind + 1 < s.length() && str <= 26)
        {
            op2 = helper(ind + 2, s);
        }

        return op1 + op2;
    }

    int numDecodings(string s)
    {
        int n = s.length();
        vector<int> dp(n + 1);

        dp[n] = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            int op1 = dp[i + 1];
            if (s[i] == '0')
            {
                op1 = 0;
                dp[i] = 0;
                continue;
            }

            int op2 = 0;
            int str = stoi(s.substr(i, 2));

            if (i + 1 < s.length() && str <= 26)
            {
                op2 = dp[i + 2];
            }

            dp[i] = op1 + op2;
        }

        return dp[0];
    }
};