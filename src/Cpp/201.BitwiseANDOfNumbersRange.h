
#ifndef __BITWISE_AND_OF_NUMBERS_RANGE_H
#define __BITWISE_AND_OF_NUMBERS_RANGE_H

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
    int rangeBitwiseAnd(int m, int n) {
        int count = 0; 
        while (m != n){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return n << count;
    }
};


#endif
