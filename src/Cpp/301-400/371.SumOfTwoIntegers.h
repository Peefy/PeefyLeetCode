
#ifndef __SUM_OF_TWO_INTEGER_H
#define __SUM_OF_TWO_INTEGER_H

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
    int getSum(int a, int b) {
        int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
};

#endif
