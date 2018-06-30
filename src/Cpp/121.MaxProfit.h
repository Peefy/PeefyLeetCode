
#ifndef __MAX_PROFIT_H
#define __MAX_PROFIT_H

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
    int maxProfit(vector<int> &prices)
    {
        auto n = prices.size();
        if (n == 0)
            return 0;
        auto minprice = prices[0];
        auto maxprofit = 0;  
        for(int i = 0; i < n; i++)
        {
            minprice = min(minprice, prices[i]);
            maxprofit = max(maxprofit, prices[i] - minprice);
        }
        return maxprofit;
    }
};

#endif
