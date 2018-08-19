
#ifndef __VALID_PERFECT_SQUARE_H
#define __VALID_PERFECT_SQUARE_H

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
    bool isPerfectSquare(int num) {
        long x = num;
        while(x * x > num)
        {
            x = (x + num / x) / 2;
        }
        return (int)(x * x) == num;
    }
};

#endif
