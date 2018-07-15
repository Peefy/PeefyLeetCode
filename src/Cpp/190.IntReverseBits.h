
#ifndef __ROTATE_ARRAY_H
#define __ROTATE_ARRAY_H

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
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0;
        for (int i = 0; i < 32; i++) {
            r <<= 1;
            int bit = (((n)>>(i))&0x01);  
            r |= bit;         
        }
        return r;
    }
};

#endif
