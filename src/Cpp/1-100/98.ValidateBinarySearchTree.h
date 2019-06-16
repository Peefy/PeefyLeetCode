
#ifndef __VALIDATE_BINARY_SEARCH_TREE_H
#define __VALIDATE_BINARY_SEARCH_TREE_H

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
    long tmp = INT64_MIN;
    bool isValidBST(TreeNode* root) {
        if(root == nullptr) return true;
        if (isValidBST(root->left)) {
            if (tmp < root->val) {
                tmp = root->val;
                return isValidBST(root->right);
            }
        }
        return false;
    }
};

#endif
