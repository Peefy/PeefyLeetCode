
#ifndef __SINGLE_NUMBER_H
#define __SINGLE_NUMBER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
  public:
    int singleNumber(vector<int> &nums)
    {
        auto beforesum = 0;
        
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            beforesum += *i;
        }  
        set<int> c;
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            c.insert(*i);
        }
        auto aftersum = 0;
        for (auto i = c.begin(); i != c.end(); i++)
        {
            aftersum += *i;
        }
        return aftersum * 2 - beforesum;
    }
};

#endif
