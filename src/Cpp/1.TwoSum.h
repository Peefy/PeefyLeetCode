
#ifndef __TWO_SUM_H
#define __TWO_SUM_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(0);
        result.push_back(0);
        auto count = 0;
        for(auto num : nums)
        {
            count++;
        }
        for(auto i = 0;i < count;++i)
        {
            for(auto j = i + 1;j < count;++j)
            {
                if(nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                }
            }
        }      
        return result;
    }
};

#endif 

