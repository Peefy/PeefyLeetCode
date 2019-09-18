
#ifndef __BUILD_BINARY_TREE_FROM_IN_AND_POST_ORDER_H
#define __BUILD_BINARY_TREE_FROM_IN_AND_POST_ORDER_H

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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        if (n == 0)
            return nullptr;
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++) {
            idx[inorder[i]] = i;
        }
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(postorder[n - 1]);
        TreeNode* cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.push(cur);
            int val = postorder[i];
            if (idx[val] > idx[cur->val]){
                cur->right = new TreeNode(val);
                cur = cur->right;
            }
            else{
                while (st.size() > 0 && idx[val] < idx[st.top()->val]){
                    cur = st.top();
                    st.pop();
                }           
                cur->left = new TreeNode(val);
                cur = cur->left;
            }
        }
        return root;
    }
};

#endif
