

#ifndef _SUM_OF_SQUARE_NUMBERS_H
#define _SUM_OF_SQUARE_NUMBERS_H

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

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
};

#endif
