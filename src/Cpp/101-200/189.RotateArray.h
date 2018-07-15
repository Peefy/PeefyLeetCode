
#ifndef __ROTATE_ARRAY_H
#define __ROTATE_ARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution
{
  public:
    void rotate(vector<int> nums ,int k)
    {
        int l = nums.size();
        if (l > 1)
        {
            k = k % l;
            if (k != 0)
            {
                if ((l % k) && (l % (l % k)))
                {
                    int temp = nums[(l - 1) * k % l];
                    for(int i = l - 2;i > -1;--i)
                    {
                        nums[(i+1) * k % l] = nums[i * k % l];
                    }                        
                    nums[0] = temp;
                }
                else
                {
                    int m = 0;
                    if (l % k != 0 && l % (l % k) == 0)
                        m = l % k;
                    else
                        m = k;
                    for (int i = 0;i < m;++i)
                    {
                        int temp = nums[(i + (l / m - 1) * k) % l];
                        for (int j = l / m - 2;j > -1;--j)
                        {
                            nums[(i + (j+1) * k) % l] = nums[(i + j * k) % l];
                        }
                        nums[i] = temp;
                    }
                }
            }
        }
    }
};

#endif
