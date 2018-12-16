
#ifndef __SELF_DIVIDING_NUMBERS_H
#define __SELF_DIVIDING_NUMBERS_H

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
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.push_back(i);
        }
        return res;
    }
};

#endif
