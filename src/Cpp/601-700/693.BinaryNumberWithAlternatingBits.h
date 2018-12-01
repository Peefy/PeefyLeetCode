
#ifndef __HAS_ALTERNATING_BITS_H
#define __HAS_ALTERNATING_BITS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <numeric>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int lastbit = n % 2;
        n /= 2;
        while(n > 0){
            int bit = n % 2;
            if (bit ^ lastbit == 0)
                return false;
            n /= 2;
            lastbit = bit;
        }
        return true;
    }
};

#endif
