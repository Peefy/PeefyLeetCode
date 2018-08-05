 
#ifndef __IS_UGLY_NUMBER_H
#define __IS_UGLY_NUMBER_H

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
    bool isUgly(int num) {
        if (num <= 0) 
            return false;
        while (num % 2 == 0) 
            num /= 2;
        while (num % 3 == 0) 
            num /= 3;
        while (num % 5 == 0) 
            num /= 5;
        return num == 1;
    }
};

#endif
