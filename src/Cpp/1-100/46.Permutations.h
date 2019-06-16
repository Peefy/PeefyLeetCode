
#ifndef __PERMUTATIONS_H
#define __PERMUTATIONS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        vector<int> path;
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(vector<vector<int>>& ans, vector<bool>& visited, vector<int> path, vector<int>& nums){
        if (path.size() == nums.size())
            ans.push_back(path);
        else{
            for (int i = 0;i < nums.size();++i){
                if (visited[i] == false){
                    visited[i] = true;
                    path.push_back(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.pop_back();
                    visited[i] = false;
                }
            }
        }
    }
};

#endif
