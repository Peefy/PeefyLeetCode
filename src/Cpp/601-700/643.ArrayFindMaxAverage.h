
#ifndef _ARRAY_FIND_MAX_AVERAGE_H
#define _ARRAY_FIND_MAX_AVERAGE_H

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
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
};

#endif

