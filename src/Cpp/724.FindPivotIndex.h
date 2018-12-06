
#ifndef __FIND_PIVOT_INDEX_H
#define __FIND_PIVOT_INDEX_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        int suml = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        for (int i = 0; i < n; i++) {
            if ((suml << 1) + nums[i] != total)
                suml += nums[i];
            else
                return i;
        }
        return -1;
    }
};

#endif
