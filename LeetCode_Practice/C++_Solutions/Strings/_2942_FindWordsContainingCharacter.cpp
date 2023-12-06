#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;
        
        for(int i = 0 ; i < words.size() ; i++) {
            if(count(words[i].begin(), words[i].end(), x) > 0) 
            arr.push_back(i);
        }
        
        return arr;
    }
};