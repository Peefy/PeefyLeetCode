
#ifndef __NEXT_GREATEST_LETTER_H
#define __NEXT_GREATEST_LETTER_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        if(len == 2){
            return min(cost[0], cost[1]);
        }
        for(int i = 2; i < cost.size(); i++){
            cost[i] = min(cost[i - 1], cost[i - 2]) + cost[i];
        }
        return min(cost[len - 1], cost[len - 2]);   
    }
};

#endif
