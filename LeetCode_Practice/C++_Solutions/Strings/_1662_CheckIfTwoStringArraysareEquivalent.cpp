#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string vectorToString(vector<string>& word) {
        string str;
        for (int i=0; i < word.size(); ++i) {
            str += word[i];
        }
        return str;
    }

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        return ( vectorToString(word1) == vectorToString(word2) );
    }
};