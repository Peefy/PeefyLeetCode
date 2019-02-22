
#ifndef __SEARCH_IN_ROTATED_SORTED_ARRAY_H
#define __SEARCH_IN_ROTATED_SORTED_ARRAY_H

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
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 0)
            return -1;
        int begin = 0;
        int end = length - 1;
        while (end > begin){
            if (end == begin + 1)
                break;
            int mid = (begin + end) / 2;
            if (nums[mid] > nums[begin])
                begin = mid;
            else
                end = mid;
        }
        if (nums[0] <= target && nums[begin] >= target){
            end = begin;
            begin = 0;
        }
        else if (nums[end] <= target && nums[-1] >= target){
            begin = end;
            end = length-1;
        }
        else
            return -1;
        while (begin <= end){
            int mid = (begin + end) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        return -1;
    }
};

#endif
