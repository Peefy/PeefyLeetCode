
#ifndef __COMBINATIONS_H
#define __COMBINATIONS_H

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
    void recursive(vector<vector<int>>& ans, vector<int>& tmp, int n, int k, int index){
        if (tmp.size() == k){
            ans.push_back(tmp);
            return;
        }
        if (k - tmp.size() > n - index)
            return;
        for (int i = index; i < n + 1; i++) {
            tmp.push_back(i);
            recursive(ans, tmp, n, k, i + 1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        recursive(ans, tmp, n, k, 1);
        return ans;
    }
};

#endif
