

#ifndef __FIND_DISPPEARED_NUMBERS_H
#define __FIND_DISPPEARED_NUMBERS_H

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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> r;
        int n = nums.size();
        int* flag = (int *)malloc(sizeof(int) * n);
        memset(flag, 0, sizeof(int) * n);
        for(int i = 0; i < n; i++)
        {
            *(flag + nums[i] - 1) = 1;
        }
        for(int i = 1; i < n + 1; i++)
        {
            if (*(flag + i - 1) != 1)
                r.push_back(i);
        }
        return r;
    }
};

#endif


