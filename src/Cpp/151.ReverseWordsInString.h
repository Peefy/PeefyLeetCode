
#ifndef __REVERSE_WORDS_IN_STRING_H
#ifndef __REVERSE_WORDS_IN_STRING_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int pos = 0;
        while (true) {
            pos = s.find_first_not_of(' ', pos);    
            if (pos == string::npos)
                break;
            st.push(s.substr(pos, s.find(' ', pos) - pos));    
            pos = s.find(' ', pos);   
        }
        string out;
        while (!st.empty()) {
            out += st.top() + " ";
            st.pop();
        }
        out.pop_back();   
        return out;
    }
};


#endif
