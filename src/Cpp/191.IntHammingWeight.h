
#ifndef __INT_HAMMING_WEIGHT_H
#define __INT_HAMMING_WEIGHT_H

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
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) == 1)
                ++count;
            n >>= 1;
        }
        return count;
    }
};
#endif
