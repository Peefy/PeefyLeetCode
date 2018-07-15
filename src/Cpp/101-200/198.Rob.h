
#ifndef __ROB_H
#define __ROB_H

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
    int rob(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
                a = max(a + nums[i], b);
            else
                b = max(a, b + nums[i]);
        }
        return max(a, b);
    }
};

#endif
