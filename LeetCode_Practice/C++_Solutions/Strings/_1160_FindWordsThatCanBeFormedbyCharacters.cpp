#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int countCharacters(vector<string>& words, string chars) {
            unordered_map<char, int> charMap;
            int count = 0;

            for (char c : chars) {
                charMap[c]++;
            }

            for (string word : words) {
                unordered_map<char, int> tempMap = charMap;                 // copy charMap to tempMap to avoid modifying charMap
                bool flag = true;                                           // flag to check if word can be formed from chars

                for (char ch : word) {
                    if (tempMap.find(ch) == tempMap.end() || tempMap[ch] == 0) {
                        flag = false;
                        break;
                    }
                    else
                        tempMap[ch]--;
                }

                if (flag)
                    count += word.size();
            }

            return count;
        }
        
};