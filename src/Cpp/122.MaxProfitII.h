
#ifndef __MAX_PROFIT_II_H
#define __MAX_PROFIT_II_H

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
        auto profit = 0;  
        for(int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];
        }
        return profit;
    }
};

#endif
