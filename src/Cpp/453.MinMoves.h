

#ifndef __MIN_MOVES_H
#define __MIN_MOVES_H

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
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min = 2147483647;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
};

#endif


