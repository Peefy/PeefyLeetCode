
#ifndef __COMBINATION_SUM_H
#define __COMBINATION_SUM_H

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
    vector<vector<int>> dfs(vector<int>& candidates, int startidx, int target){
        vector<vector<int>> res;
        for (int i = startidx;i < candidates.size();++i){
            if (candidates[i] > target)
                continue;
            if (candidates[i] == target){
                res.push_back(vector<int>{candidates[i]});
                continue;
            }
            auto item = dfs(candidates, i, target - candidates[i]);
            for (auto ii : item){
                ii.push_back(candidates[i]);
                res.push_back(ii);
            }
        }
        return res;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        return dfs(candidates, 0, target);
    }
};

#endif
