
#ifndef __BACKSPACE_COMPARE_H
#define __BACKSPACE_COMPARE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<char> build(string str){
        vector<char> stack;
        for (char s : str){
            if (s == '#'){
                if (stack.size() > 0)
                    stack.pop_back();
            }
            else
                stack.push_back(s);
        }
        return stack;
    }

    bool backspaceCompare(string S, string T) {
        vector<char> s_stack = build(S);
        vector<char> t_stack = build(T);
        if (s_stack.size() != t_stack.size())
            return false;
        for (int i = 0; i < s_stack.size(); i++) {
            if (s_stack[i] != t_stack[i])
                return false;
        }
        return true;
    }
};

#endif

