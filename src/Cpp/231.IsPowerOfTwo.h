 
#ifndef __IS_POWER_OF_TWO_H
#define __IS_POWER_OF_TWO_H

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
    bool isPowerOfTwo(int n) {        
        if (n <= 0) {
            return false;
        }
        int64_t s = 2147483648;
        if (s % n == 0)
        {
            return true;
        }
        return false;
    }
};

#endif
