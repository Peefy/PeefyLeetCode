
#ifndef __THREE_SUM_CLOEST_H
#ifndef __THREE_SUM_CLOEST_H

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
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int min = 999;
        int res = 0;
        int num = nums.size() - 2;
        for(int i = 0; i < num; i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1;
            int r = num + 1;        
            if (i > 0){
                int s = nums[i] + nums[r-1] + nums[r];
                int temp = fabs(target - s);
                if (temp < min){
                    res = s;
                    min = temp;
                    continue;
                }
            }
            while (l < r){
                int s = nums[i] + nums[l] + nums[r];
                int temp = fabs(target - s);
                if (temp < min){
                    min = temp;
                    res = s;
                }
                if (s > target)
                    r -= 1;
                else if (s < target)
                    l += 1;
                else
                    return s;
            }
        }
        return res;
    }
};

#endif
