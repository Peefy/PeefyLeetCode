
#ifndef __YANG_HUI_TRIANGLE_H
#define __YANG_HUI_TRIANGLE_H

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
    vector<int> generate_next(vector<int> arr)
    {
        auto n = arr.size();
        vector<int> r;
        r.push_back(1);     
        for(int i = 0; i < n - 1; i++)
        {
            r.push_back(arr[i] + arr[i + 1]);
        } 
        r.push_back(1);
        return r;
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> none;
        vector<int> one = {1};
        vector<int> two = {1, 1};
        if (numRows == 0)
            return none;
        if (numRows == 1)
        {
            none.push_back(one); 
            return none;
        }
        if (numRows == 2)
        {
            none.push_back(one);
            none.push_back(two);
            return none;
        }
        none.push_back(one);
        none.push_back(two);
        auto arr = two;
        for(int i = 0; i < numRows - 2; i++)
        {
            arr = this->generate_next(arr);
            none.push_back(arr);
        }
        return none;   
    }
};

#endif
