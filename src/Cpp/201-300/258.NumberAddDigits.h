 
#ifndef __NUMBER_ADD_DIGITS_H
#define __NUMBER_ADD_DIGITS_H

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
    int addDigits(int num) {
        int r = 0;      
        while (num > 0) {
            r += num % 10;
            num /= 10;
        }
        if (r >= 10)
            return addDigits(r);
        return r;
    }
};

#endif
