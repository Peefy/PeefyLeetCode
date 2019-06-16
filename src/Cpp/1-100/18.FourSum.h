
#ifndef __FOUR_SUM_H
#define __FOUR_SUM_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 4) 
            return res;
        sort(nums.begin(), nums.end());    
        for (int i = 0;i < n - 3;++i){
            int x = nums[i];
            int target1 = target - x;
            int sum4 = nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3];
            int lastsum4 = nums[n - 1] + nums[n - 2] + nums[n - 3];
            if (sum4 > target)
                break;
            else if (lastsum4 < target1 || (i > 0 && x == nums[i - 1]))
                continue;
            for (int j = i + 1;j < n - 2;j++){
                int target2 = target1 - nums[j];
                if (nums[j + 1] + nums[j + 2] > target2)
                    break;
                else if (nums[n-2] + nums[n-1] < target2 || (j > i + 1 && nums[j] == nums[j - 1]))
                    continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l){
                    int temp = nums[k] + nums[l];
                    if (temp > target2)
                        l -= 1;
                    else if (temp < target2)
                        k += 1;
                    else{
                        res.push_back(vector<int>{x, nums[j], nums[k], nums[l]});
                        while (k < l && nums[k] == nums[k + 1])
                            k += 1;
                        while (k < l && nums[l] == nums[l - 1])
                            l -= 1;
                        k += 1;
                        l -= 1; 
                    }
                }           
            }
        }
        return res;
    }
};

#endif
