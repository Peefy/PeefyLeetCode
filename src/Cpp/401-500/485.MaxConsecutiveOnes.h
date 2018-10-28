
#ifndef _MAX_CONSECUTIVE_ONE_H
#define _MAX_CONSECUTIVE_ONE_H

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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxcount = 0;
        for (int num : nums) {
            if (num == 1) {
                ++count;
            } else {
                maxcount = count > maxcount ? count : maxcount;
                count = 0;
            }
        }
        return count > maxcount ? count : maxcount;
    }
};

#endif
