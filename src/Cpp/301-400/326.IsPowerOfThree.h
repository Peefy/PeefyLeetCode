 
#ifndef __IS_POWER_OF_THREE_H
#define __IS_POWER_OF_THREE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
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
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n%3 != 0) return false;
        int i = 3;
        while (i < n) i *= 3;
        return i == n;
    }
}

#endif
