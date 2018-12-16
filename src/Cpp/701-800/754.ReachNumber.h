
#ifndef __REACH_NUMBER_H
#define __REACH_NUMBER_H

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

class Solution{
  public:
    int reachNumber(int target){
        target = abs(target);
        int n = ceil((-1.0 + sqrt(1 + 8.0 * target)) / 2);
        if ((n * (n + 1) / 2) == target)
            return n;
        int d = (n * (n + 1) / 2) - target;
        if ((d & 1) == 0)
            return n;
        return (n & 1) ? n + 2 : n + 1;
    }
};

#endif
