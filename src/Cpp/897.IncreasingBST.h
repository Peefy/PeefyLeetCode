
#ifndef __INCREASE_BST_H
#define __INCREASE_BST_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;


struct TreeNode {
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
    TreeNode* ans;
    TreeNode* cur;

    void inorder(TreeNode* node){
        if (node == nullptr) {
            return;
        }
        inorder(node->left);
        node->left = nullptr;
        cur->right = node;
        cur = node;
        inorder(node->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans->right;
    }
};

#endif
