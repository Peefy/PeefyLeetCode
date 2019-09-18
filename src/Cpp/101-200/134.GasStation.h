
#ifndef __GAS_STATION_H
#define __GAS_STATION_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.size(); i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
};

#endif
