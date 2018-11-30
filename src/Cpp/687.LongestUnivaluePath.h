
#ifndef __LONGEST_UNIVALUE_PATH_H
#define __LONGEST_UNIVALUE_PATH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int re = 0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root, 0);
        return re;
    }
    int dfs(TreeNode *node, int n) {
        if (node == nullptr)
			return 0;
		int left = dfs(node->left, node->val);
		int right = dfs(node->right, node->val);
		re = max(re, left + right);
		return node->val == n ? max(left, right) + 1 : 0;
    }
};

#endif
