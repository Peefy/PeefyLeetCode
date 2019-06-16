
#ifndef __SEARCH_RANGE_H
#define __SEARCH_RANGE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size();
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == nums.size() || nums[lo] != target)
            return vector<int>{-1, -1};
        int left = lo;
        lo = 0;
        hi = nums.size();
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid] || target == nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return vector<int>{left, lo - 1};
    }
};

#endif
