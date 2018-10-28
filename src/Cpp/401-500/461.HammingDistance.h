
#ifndef __HAMMING_DISTANCE_H
#define __HAMMING_DISTANCE_H

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
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int count = 0;
        while(z != 0){
            int bit = z & 0x01;
            z >>= 1;
            count += bit == 1 ? 1 : 0;
        }
        return count;
    }
};

#endif


