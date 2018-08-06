 
#ifndef __MISSING_NUMBER_H
#define __MISSING_NUMBER_H

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

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (isBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
};

#endif
