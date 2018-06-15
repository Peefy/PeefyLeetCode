
#ifndef __MAX_SUB_ARRAY_H
#define __MAX_SUB_ARRAY_H

#include <string.h>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int maxSubArray(vector<int> &nums)
    {
        auto sum = 0;
        auto max = nums[0];
        for (auto& num : nums){
            if (sum < 0)
                sum = 0;
            sum += num;
            if (sum > max)
                max = sum;
        }
        return max;
    }
};

#endif
