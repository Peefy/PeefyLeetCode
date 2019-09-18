
#ifndef __TREE_PATH_SUM_II_H
#define __TREE_PATH_SUM_II_H

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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    void dfs(TreeNode* node, vector<vector<int>>& ans, vector<int>& tmp, int s, int targetsum){
        tmp.push_back(node->val);
        targetsum += node->val;
        if (node->left == nullptr && node->right == nullptr){
            if (targetsum == s)
                ans.push_back(vector<int>(tmp));
            return;
        }
        if (node->left != nullptr){
            dfs(node->left, ans, tmp, s, targetsum);
            tmp.pop_back();
        }
        if (node->right != nullptr){
            dfs(node->right, ans, tmp, s, targetsum);
            tmp.pop_back();
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        vector<int> tmp;
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
};

#endif
