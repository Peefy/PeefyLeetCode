
#ifndef __COMBINATION_SUM_II_H
#define __COMBINATION_SUM_II_H

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
    void dfs(vector<int>& candidates, vector<int>& path, int gap, 
        vector<vector<int>>& res, int start){
        if (gap == 0){
            res.push_back(vector<int>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.size();++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.push_back(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if (candidates.size() == 0)
            return vector<vector<int>>();    
        vector<int> path;
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, path, target, res, 0);
        return res;
    }
};

#endif
