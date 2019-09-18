
#ifndef __MAJORITY_ELEMENT_II_H
#define __MAJORITY_ELEMENT_II_H

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
    vector<int> majorityElement(vector<int>& nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.size();
        for (size_t i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (size_t i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        vector<int> ans;
        if (cnt1 > n / 3)
            ans.push_back(major1);
        if (cnt2 > n / 3)
            ans.push_back(major2);
        return ans;
    }
};

#endif
