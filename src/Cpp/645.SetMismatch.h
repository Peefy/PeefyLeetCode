
#ifndef _SET_MISMATCH_H
#define _SET_MISMATCH_H

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
    vector<int> findErrorNums(vector<int> &nums){
        vector<int> ans(2);
        auto n = nums.size();
        auto map = new bool[n + 1];
        memset(map, false, sizeof(bool) * (n + 1));
        for (int i = 0; i < n; i++)
        {
            if (map[nums[i]] == false)
                map[nums[i]] = true;
            else{
                ans[0] = nums[i];
            }           
        }
        for (int i = 1; i < (n + 1); i++){
            if (map[i] == false)
            {
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
};

#endif
