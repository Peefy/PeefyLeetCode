
#ifndef __POW_X_N_H
#define __POW_X_N_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

#endif
