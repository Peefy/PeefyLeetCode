
#ifndef _NON_DECREASING_H
#define _IMAGE_SMOOTHER_H

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
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        for (int num : nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
};

#endif
