
#ifndef __SINGLE_NUMBER_II_H
#define __SINGLE_NUMBER_II_H

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
    int singleNumber(vector<int>& nums) {
        int b1 = 0, b2 = 0;
        for (int n : nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
};

#endif
