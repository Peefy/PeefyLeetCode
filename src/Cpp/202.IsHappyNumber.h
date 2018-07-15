
#ifndef __IS_HAPPY_NUMBER_H
#define __IS_HAPPY_NUMBER_H

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
    int getNext(int num){
        int num_r = 0;
        while (num > 0) {
            int c = num % 10;
            num = num / 10;
            num_r += c * c;
        }
        return num_r;
    }

    bool isHappy(int n) {
        int fast = getNext(getNext(n));
        int slow = getNext(n);
        if (fast == 1)
            return true;
        while (fast != slow)
        {
            if (fast == 1)
                return true;
            fast = getNext(getNext(fast));
            slow = getNext(slow);
        }
        return false;
    }
};

#endif
