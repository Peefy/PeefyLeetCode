
#ifndef __TRAILING_ZEROES_H
#define __TRAILING_ZEROES_H

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

class Solution {
public:
    int trailingZeroes(int n) {
        if (n < 5)
            return 0;
        else
            return n / 5 + trailingZeroes(n / 5);
    }
};

#endif
