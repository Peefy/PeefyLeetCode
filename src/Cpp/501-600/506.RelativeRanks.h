
#ifndef __RELATIVE_RANKS_H
#define __RELATIVE_RANKS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        auto maxnum = 0;
        for(auto num : nums)
        {
            maxnum = max(maxnum, num);
        }
        vector<int> hash(maxnum + 1); 
        vector<string> r(nums.size()); 
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i + 1;
        }
        int place = 1;
        for (int i = maxnum; i >= 0; i--) {
            if (hash[i] != 0) {
                if (place == 1) {
                    r[hash[i] - 1] = "Gold Medal";
                } else if (place == 2) {
                    r[hash[i] - 1] = "Silver Medal";
                } else if (place == 3) {
                    r[hash[i] - 1] = "Bronze Medal";
                } else {
                    r[hash[i] - 1] = to_string(place);
                }
                place++;
            }
        }
        return r;
    }
};

#endif
