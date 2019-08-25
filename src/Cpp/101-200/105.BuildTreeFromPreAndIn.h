
#ifndef __BUILD_BINARY_TREE_FROM_PRE_AND_INORDER_H
#ifndef __BUILD_BINARY_TREE_FROM_PRE_AND_INORDER_H

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        if (n == 0)
            return nullptr;
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++) {
            idx[inorder[i]] = i;
        }
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* cur = root;
        for (int i = 1; i < n; i++) {
            st.push(cur);
            int val = preorder[i];
            if (idx[val] < idx[cur->val]){
                cur->left = new TreeNode(val);
                cur = cur->left;
            }
            else{
                while (st.size() > 0 && idx[val] > idx[st.top()->val]){
                    cur = st.top();
                    st.pop();
                }           
                cur->right = new TreeNode(val);
                cur = cur->right;
            }
        }
        return root;
    }
};

#endif
