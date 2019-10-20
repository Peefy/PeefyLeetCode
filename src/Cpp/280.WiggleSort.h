
#ifndef __WIGGLE_SORT_H
#define __WIGGLE_SORT_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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
    void wiggleSort(vector<int> nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                swap(nums[i - 1], nums[i]);
            }       
        }
    }
};

#endif
