
#ifndef __REMOVE_ELEMENT_H
#define __REMOVE_ELEMENT_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int removeElement(vector<int> &nums, int val)
    {
        auto count = 0;
        for (auto i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != val){
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};

#endif
