
#ifndef __BINARY_TREE_LONGEST_CONS_SEQ_H
#define __BINARY_TREE_LONGEST_CONS_SEQ_H

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
    int longestConsecutive(TreeNode* root) {
        return helper(root, NULL, 0);
    }
    int helper(TreeNode *root, TreeNode *p, int res) {
        if (!root) return res;
        res = (p && root->val == p->val + 1) ? res + 1 : 1;
        return max(res, max(helper(root->left, root, res), helper(root->right, root, res)));
    }
};

#endif
