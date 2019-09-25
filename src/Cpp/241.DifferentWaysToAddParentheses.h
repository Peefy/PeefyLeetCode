
#ifndef __DIFFERENT_WAYS_TO_ADD_PARENTTHESES_H
#define __DIFFERENT_WAYS_TO_ADD_PARENTTHESES_H

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


class Solution {
private:
    vector<int> solve(string s){
        vector<int> ans;
        for (size_t i = 0; i < s.length(); i++){
            if (!isdigit(s[i])){
                auto left = solve(s.substr(0, i));
                auto right = solve(s.substr(i + 1));
                for(auto ita = left.begin(); ita != left.end(); ita++){
                    for(auto itb = right.begin(); itb != right.end(); itb++){
                        if (s[i] == '+') ans.push_back(*ita + *itb);
                        else if (s[i] == '-') ans.push_back(*ita - *itb);
                        else ans.push_back(*ita**itb);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(s));
            return ans;
    }
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> ans;
        if (input.empty()) 
            return ans;
        ans = solve(input);
        return ans;
    }
};

#endif
