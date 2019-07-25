
#ifndef __MAXIMUM_PRODUCT_SUBARRAY_H
#ifndef __MAXIMUM_PRODUCT_SUBARRAY_H

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


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) 
            return 0;
        int i, ret, pos, neg, temp;
        pos = nums[0];
        neg = nums[0];
        ret = nums[0];
        for(i = 1; i < nums.size(); i++){
            temp = pos;
            pos = max(nums[i], max(pos * nums[i], neg * nums[i]));
            neg = min(nums[i], min(temp * nums[i], neg * nums[i]));
            ret = max(pos, ret);
        }
        return ret;
    }
};


#endif
