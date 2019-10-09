
#ifndef __UGLY_NUMBER_II_H
#define __UGLY_NUMBER_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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
    int nthUglyNumber(int n) {
        vector<int> dp(n, 0);
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (int i = 1; i < n; i++) {
            dp[i] = min(dp[p2] * 2, dp[p3] * 3);
            dp[i] = min(dp[i], dp[p5] * 5);
            if (dp[i] >= dp[p2] * 2)
                p2 += 1;
            if (dp[i] >= dp[p3] * 3)
                p3 += 1;
            if (dp[i] >= dp[p5] * 5)
                p5 += 1;
        }
        return dp[n - 1];
    }
};


#endif
