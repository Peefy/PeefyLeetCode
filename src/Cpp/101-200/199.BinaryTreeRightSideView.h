
#ifndef __BINARY_TREE_RIGHT_SIDE_VIEW_H
#ifndef __BINARY_TREE_RIGHT_SIDE_VIEW_H

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        helper(root,0,res);
        return res;        
    }
    void helper(TreeNode* root,int level,vector<int>& res){
        if(!root) return;
        if(res.size()==level) res.push_back(root->val);
        helper(root->right,level+1,res);
        helper(root->left,level+1,res);
    }
};


#endif
