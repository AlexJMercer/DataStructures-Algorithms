#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        unordered_map<char, int> mp;
        int n = words.size();
        for (auto s : words)
            for (auto c : s)
                mp[c]++;
            
        
        for (auto i : mp)
            if (i.second % n)
                return false;

        return true;
    }
};