
#ifndef __GENERATE_PARENTHESIS_H
#define __GENERATE_PARENTHESIS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        recursive(n, 0, 0, res, "");
        return res;
    }

    void recursive(int n, int count1, int count2, vector<string>& res, string ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.push_back(ans);
        if (count1 >= count2){
            auto ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }
};

#endif
