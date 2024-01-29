#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;   
    
        for (char c : word1)
            map1[c]++;
        for (char c : word2)
            map2[c]++;

        for (char c = 'a'; c <= 'z'; c++) {
            if (map1[c] && !map2[c] || !map1[c] && map2[c])
                return false;
        }

        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;

        for (auto it : map1)
            freq1[it.second]++;
        for (auto it : map2)
            freq2[it.second]++;

        for (int i = 1; i <= word1.size(); i++) {
            if (freq1[i] && !freq2[i] || !freq1[i] && freq2[i])
                return false;
        }

        return true;
    }
};