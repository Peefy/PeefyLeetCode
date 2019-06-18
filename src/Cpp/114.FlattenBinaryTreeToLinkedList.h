
#ifndef __FLATTEN_BINARY_TREE_TO_LINKED_LIST_H
#ifndef __FLATTEN_BINARY_TREE_TO_LINKED_LIST_H

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
    void flatten(TreeNode* root) {
        if (root == nullptr)
            return;
        flatten(root->left);
        flatten(root->right);
        auto* tmp = root->right;
        root->right = root->left;
        root->left = nullptr;
        while(root->right != nullptr)
            root = root->right;
        root->right = tmp;
    }
};

#endif
