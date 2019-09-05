
#ifndef __HOUSE_ROBBER_II_H
#ifndef __HOUSE_ROBBER_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        vector<int> dpa = vector<int>(n + 1, 0);
        vector<int> dpb = vector<int>(n + 1, 0);
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return max(dpa[n], dpb[n]);
    }
};



#endif
