
#ifndef _NEXT_GREATER_ELEMENT_H
#define _NEXT_GREATER_ELEMENT_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> r;
        unordered_map<int, int> dmap;
        std::stack<int> s;
        for(auto n : nums){      
            while(s.size() > 0 && s.top() < n){
                dmap[s.top()] = n;
                s.pop();
            }      
            s.push(n);   
        }
        for(auto n : findNums){
            r.push_back(dmap.find(n) != dmap.end() ? dmap[n] : -1);
        }  
        return r;
    }
};

#endif

