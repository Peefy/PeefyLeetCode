
#ifndef __YANG_HUI_TRIANGLE_II_H
#define __YANG_HUI_TRIANGLE_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>

using namespace std;

class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {
        ++rowIndex;
        vector<int> init;
        if (rowIndex == 0)
            return init;
        init.push_back(1);  
        for(int i = 0; i < rowIndex - 1; i++)
        {
            init.push_back(0);
            init.insert(init.begin(), 0);           
            for(int j = 0; i < init.size() - 1; i++)
            {
                init[j] = init[j] + init[j + 1];
            }
        }
        init.erase(init.begin() + rowIndex, init.end());
        return init;
    }
};

#endif
