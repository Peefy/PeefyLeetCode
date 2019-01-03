
#ifndef __SMALLEST_RANGE_I_H
#define __SMALLEST_RANGE_I_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int maxv = 0;
        int minv = 10000;
        for (int a : A){
            maxv = max(a, maxv);
            minv = min(a, minv);
        }
        return max(0, maxv - minv - 2 * K);
    }
};

#endif

