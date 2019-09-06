
#ifndef __COMBINATION_SUM_III_H
#ifndef __COMBINATION_SUM_III_H

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

    const int MAX_INDEX = 10;

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> tmp;
        traceBack(k, n, 0, 1, tmp, ans);
        return ans;
    }

    void traceBack(int k, int n, int sum, int begin, 
        vector<int>& list, vector<vector<int>>& ans){
        if (k == 0){
            if (n == sum)
                ans.push_back(vector<int>(list));
            return;
        }
        for (int i = begin; i < MAX_INDEX; i++) {
            list.push_back(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.pop_back();
        }
    }
};


#endif
