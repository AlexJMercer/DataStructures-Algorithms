#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqMap;

        for (int i : arr)
            freqMap[i]++;

        unordered_set<int> set;
        for (auto iter : freqMap) {
            set.insert(iter.second);
        }

        return ( freqMap.size() == set.size() );
    }
};