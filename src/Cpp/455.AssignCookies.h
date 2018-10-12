

#ifndef __MIN_MOVES_H
#define __MIN_MOVES_H

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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        int i = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int c : s) {
            if (c >= g[i]){
                count +=1;
                if (i < g.size() - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
};

#endif


