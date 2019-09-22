
#ifndef __PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#define __PRODUCT_OF_ARRAY_EXCEPT_SELF_H

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
    vector<int> productExceptSelf(vector<int>& nums) {
        auto n = nums.size();
        auto left = 1;
        auto right = 1;
        vector<int> res(n, 1); 
        for (size_t i = 0; i < n; i++){
            res[i] *= left;
            left *= nums[i];
            res[n - 1 - i] *= right;
            right *= nums[n - 1 - i];
        }
        return res;
    }
};

#endif
