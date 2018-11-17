
#ifndef __FIND_UNSORTED_SUBARRAY_H
#define __FIND_UNSORTED_SUBARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution
{
  public:
    int findUnsortedSubarray(vector<int> &nums){
        int n = nums.size();
        int start = -1;
        int end = -2;
        int minval = nums[n - 1];
        int maxval = nums[0];
        for (int i = 0, pos = 0; i < n; i++){
            pos = n - 1 - i;
            maxval = max(maxval, nums[i]);
            minval = min(minval, nums[pos]);
            if (nums[i] < maxval)
                end = i;
            if (nums[pos] > minval)
                start = pos;
        }
        return end - start + 1;
    }
};

#endif
