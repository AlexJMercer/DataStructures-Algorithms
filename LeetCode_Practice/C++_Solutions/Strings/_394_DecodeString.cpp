#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

class Solution {
public:
    string decodeString(string str) {
        int size = str.size();
        stack<char> st;

        for (int i=0; i < size; ++i) {
            if (str[i] != ']') {
                st.push(str[i]);
            }
            else {
                string curr = "";

                while (st.top() != '[') {
                    curr = st.top() + curr;
                    st.pop();
                }
                st.pop();

                string num = "";

                while ( !st.empty() && isdigit(st.top()) ) {
                    num = st.top() + num;
                    st.pop();
                }
                int times = stoi(num);

                while (times--) {
                    for(int j = 0; j < curr.size() ; j++)
                        st.push(curr[j]);
                }
            }
        }

        str = "";
        while ( !st.empty() ) {
            str = st.top() + str;
            st.pop();
        }

        return str;
    }
};