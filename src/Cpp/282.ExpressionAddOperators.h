
#ifndef __EXPRESSION_ADD_OPERATORS_H
#define __EXPRESSION_ADD_OPERATORS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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

class Solution {
vector<vector<string> > output;
public:
    void solve(long long target, long long n, int sign, string num, vector<string>&cal)
    {
        if (!num.size())
        {
            target -= sign*n;
            if (!target) output.push_back(cal);
            return;
        }
        for (int len=1;len<=num.size();len++)
        {
            if (num[0]=='0' && len>1)
                continue;
            if (!cal.empty())
            {
                //+ 更新当前的值，重设缓冲值
                cal.push_back("+");
                cal.push_back(num.substr(0,len));
                solve(target-sign*n,stoll(num.substr(0,len)), 1, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
                //- 更新当前的值，重设缓冲值
                cal.push_back("-");
                cal.push_back(num.substr(0,len));
                solve(target-sign*n,stoll(num.substr(0,len)), -1, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
                //* 不更新当前的值，需要累乘到缓冲值中
                cal.push_back("*");
                cal.push_back(num.substr(0,len));
                solve(target,n*stoll(num.substr(0,len)),sign, num.substr(len), cal);
                cal.pop_back();
                cal.pop_back();
            }
            else // 第一个值直接算作加到缓冲值中
            {
                cal.push_back(num.substr(0, len));
                solve(target,stoll(num.substr(0,len)),1, num.substr(len, num.size()-len), cal);
                cal.pop_back();
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> cal;
        solve(target, 0, 1, num, cal);
        vector<string> out;
        for (auto d: output)
        {
            string o = "";
            for (auto s:d)
                o+=s;
            out.push_back(o);
        }
        return out;
    }
};


#endif
