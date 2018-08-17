 
#ifndef __IS_POWER_OF_FOUR_H
#define __IS_POWER_OF_FOUR_H

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
    bool isPowerOfFour(int num) {
        return num > 0 && 1073741824 % num == 0 && \
            (num - 1) % 3 == 0;
    }
};

#endif
