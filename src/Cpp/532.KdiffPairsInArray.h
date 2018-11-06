
#ifndef __K_DIFF_FIND_PAIRS_H
#define __K_DIFF_FIND_PAIRS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) { 
        if(k < 0)
            return 0;
        map<int, int> hm;
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            hm[nums[i]] = i;
        }
        for(int i = 0; i < n; i++){
            auto pos = hm.find(nums[i] + k);
            if (pos != hm.end() && hm[nums[i]+k] != i){
                count++;
                hm.erase(pos);
            }
        }
        return count;
    }
};

#endif
