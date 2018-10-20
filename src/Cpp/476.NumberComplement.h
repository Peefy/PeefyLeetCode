
#ifndef __NUMBER_COMPLEMENT_H
#define __NUMBER_COMPLEMENT_H

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
    int findComplement(int num) {
        int r = 0;
        int n = 0;
        while (num > 0){
            (num & 0x01) == 1 ?  (r &= ~(1<<n)): (r |= (1<<n)); 
            ++n;
            num >>= 1;
        }
        return r;
    }
};

#endif


