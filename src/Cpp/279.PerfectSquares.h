
#ifndef __PERFECT_SQUARES_H
#define __PERFECT_SQUARES_H

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
public:
    int numSquares(int n) {
        if (n == 0)
            return 0;
        queue<pair<int, int>> v;
        v.push(make_pair(n, 0));
        vector<bool> sp(n + 1, false);
        sp[n] = true;
        while (v.size()) {
            int size = v.size();
            while (size--) {
                auto pt = v.front();
                v.pop();
                int d = pt.first;
                sp[d] = true;
                for (int i = 1; d - i * i >= 0; ++i) {
                    int a = d - i * i;
                    if (a == 0) {
                        int k = pt.second;
                        k++;
                        return k;
                    }
                    if (sp[a] == false) 
                        v.push(make_pair(a, pt.second + 1));
                }
            }
        }
        return 0;
    }
};

#endif
