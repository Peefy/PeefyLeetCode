
#ifndef _NON_DECREASING_H
#define _IMAGE_SMOOTHER_H

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

class Solution{
  public:
    bool checkPossibility(vector<int> &nums){
        if (nums.size() <= 2)
            return true;
        int count = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < nums[i - 1]){
                if (count == 0)
                    return false;
                if (i == 1 || nums[i] >= nums[i - 2])
                    nums[i - 1] = nums[i];
                else
                    nums[i] = nums[i - 1];
                count--;
            }
        }
        return true;
    }
};

#endif
