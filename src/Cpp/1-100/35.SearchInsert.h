
#ifndef __SEARCH_INSERT_H
#define __SEARCH_INSERT_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (target <= nums[i])
            {
                ans = i;
                break;
            }
        }
        ans = ans == -1 ? nums.size() : ans;
        return ans;
    }
};

#endif
