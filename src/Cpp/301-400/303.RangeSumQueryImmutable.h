 
#ifndef __RANGE_SUM_H
#define __RANGE_SUM_H

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

class NumArray {
public:
    NumArray(vector<int> nums) {
        int n = nums.size();
        if (n == 0) {
            return;
        }
        arr.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            arr.push_back(arr[i - 1] + nums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
private:
    vector<int> arr;
};


#endif
