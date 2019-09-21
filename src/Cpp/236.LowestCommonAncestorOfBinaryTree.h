
#ifndef __LOWEST_COMMON_ANCESTOR_OF_BINARY_TREE_H
#define __LOWEST_COMMON_ANCESTOR_OF_BINARY_TREE_H

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q)
            return root;
        auto* l = lowestCommonAncestor(root->left, p, q);
        auto* r = lowestCommonAncestor(root->right, p, q);
        if (l == nullptr)
            return r;
        else {
            if (r == nullptr)
                return l;
            return root;
        }
    }
};

#endif
