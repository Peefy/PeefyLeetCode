 
#ifndef __MISSING_NUMBER_H
#define __MISSING_NUMBER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor = 0 ;
        for(int i = 0; i<nums.size(); i++){
            xor = xor ^ i ^ nums[i];
        }
        return xor ^ nums.size();
    }
};

#endif
