
#ifndef __MISSING_RANGES_H
#ifndef __MISSING_RANGES_H

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


class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        vector<string> ret;
        for(int i = 0; i <= nums.size(); i++) {
            if(i < nums.size() && nums[i] < expected) continue;
            long val = (i==nums.size())?newUpper+1:nums[i];
            if(expected != val && expected + 1 == val) {
                ret.push_back(to_string(expected));
            } else if(expected != val){
                ret.push_back(to_string(expected) + "->" + to_string(val-1));
            }
            expected = val+1;
        }
        return ret;
    }
};


#endif
