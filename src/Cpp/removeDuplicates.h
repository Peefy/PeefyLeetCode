
#ifndef __REMOVE_DUPLICATES_H
#define __REMOVE_DUPLICATESH

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    int removeDuplicates(vector<int> &nums)
    {
        auto n = nums.size();
        if (n > 0){
            auto last = nums[0];
            auto index = 1;
            for (auto i = 1; i < n; ++i){
                auto now = nums[i];
                if (now != last){
                    nums[index++] = now;
                    last = now;
                }
            }
            return index;
        }
        return 0;
    }
};

#endif
