

#ifndef __POOR_PIGS_H
#define __POOR_PIGS_H

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
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int base = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= base;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
};

#endif


