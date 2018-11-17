
#ifndef __RANGE_ADDITION_II_H
#define __RANGE_ADDITION_II_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.size() == 0)
            return m * n;
        int minm = ops[0][0];
        int minn = ops[0][1];
        for (auto each : ops) {
            minm = min(minm, each[0]);
            minn = min(minn, each[1]);
        }
        return minm * minn;
    }
};


#endif
