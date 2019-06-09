
#ifndef __SUBSETS_H
#define __SUBSETS_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void subs(vector<int>& nums, int index, vector<vector<int>>& res, vector<int>& tmp, int n){
        res.push_back(tmp);
        for (int i = index; i < n; i++) {
            vector<int> newtmp(tmp);
            newtmp.push_back(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        int n = nums.size();
        subs(nums, 0, res, tmp, n);
        return res;
    }
};

#endif
