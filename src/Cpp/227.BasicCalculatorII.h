
#ifndef __BASIC_CALCULATOR_II_H
#define __BASIC_CALCULATOR_II_H

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

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();

class Solution{
public:
    int calculate(string s){
        stack<int> st;
        int n = s.size(), num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s[i] >= '0')
                num = num * 10 + (s[i] - '0');
            if ((s[i] < '0' && s[i] != ' ') || i == n - 1){
                if (op == '+')
                    st.push(num);
                if (op == '-')
                    st.push(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.top() * num : st.top() / num;
                    st.pop();
                    st.push(temp);
                }
                op = s[i];
                num = 0;
            }
        }
        while (!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};

#endif
