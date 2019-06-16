
#ifndef __SEARCH_ROTATED_SORTED_ARRAY_II_H
#define __SEARCH_ROTATED_SORTED_ARRAY_II_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        if (right == -1)
            return false;
        int k = 0;
        for (size_t i = 1; i < right + 1; i++){
            if (nums[i] < nums[i - 1])
                k = i;
        }
        while (left <= right){
            int beforemiddle = (left + right) / 2;
            int middle = beforemiddle + k;
            if (middle >= nums.size())
                middle = middle - nums.size();
            if (target == nums[middle])
                return true;
            else if (target < nums[middle])
                right = beforemiddle - 1;
            else
                left = beforemiddle + 1;
        }
        return false;
    }
};

#endif
