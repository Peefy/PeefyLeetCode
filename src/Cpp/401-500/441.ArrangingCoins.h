
#ifndef __ARRANGING_COINS_H
#define __ARRANGING_COINS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(1 + 8 * (long long)n) / 2.0 - 0.5);
    }
};

#endif
