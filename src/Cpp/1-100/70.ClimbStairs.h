
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{

  public:
    int climbStairs(int n)
    {
        if (n <= 2)
            return n;
        int a = 1, b = 2, i = 3;
        while (i <= n)
        {
            int sum = a + b;
            a = b;
            b = sum;
            ++i;
        }
        return b;
    }
};

#endif
