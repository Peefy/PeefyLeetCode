 
#ifndef __CONTAINS_NEARBY_DUPLICATE_H
#define __CONTAINS_NEARBY_DUPLICATE_H

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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(m.find(nums[i]) != m.end() && i - m[nums[i]] <= k)
                return true;
            else
                m[nums[i]] = i;
        }
        return false;
    }
};

#endif
