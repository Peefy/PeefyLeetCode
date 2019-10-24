
#ifndef __INORDER_SECCESSOR_IN_BST_H
#define __INORDER_SECCESSOR_IN_BST_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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
    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p) {
        cur = root;
        pre = NULL;
        while (cur != NULL || !s.empty()) {
            while (cur != NULL) {
                s.push(cur);
                cur = cur->left;
            }
            if (s.size() > 0) {
                cur = s.top();
                if (pre == p)
                    return cur;
                s.pop();
                pre = cur;
                cur = cur->right;
            }
        }
        return NULL;
    }

private:
    TreeNode *cur;
    TreeNode *pre;
    stack<TreeNode *> s;
};

#endif
