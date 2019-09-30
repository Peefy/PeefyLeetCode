
#ifndef __COUNT_UNIVALUE_SUBTREES_H
#define __COUNT_UNIVALUE_SUBTREES_H

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
    bool dfs(TreeNode* root, int pre, int& ans) {
        if (root == nullptr)
            return true;
        bool flag1 = dfs(root->left, root->val, ans);
        bool flag2 = dfs(root->right, root->val, ans);
        if (flag1 && flag2)
            ans++;
        return (root->val == pre) && flag1 && flag2;
    }

    int countUnivalSubtrees(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int ans = 0;
        dfs(root, root->val, ans);
        return ans;
    }
};

#endif
