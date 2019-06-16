
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
    void dfs(vector<vector<int>> & res, vector<int> &path, vector<int>& nums, int index){
        res.push_back(vector<int>(path));     
        if (index == nums.size())
            return;
        for (int i = index; i < nums.size(); i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.push_back(nums[i]);
            dfs(res, path, nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> path;
        dfs(res, path, nums, 0);
        return res;
    }
};

#endif
