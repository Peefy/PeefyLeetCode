
#ifndef __TREE_TO_STRING_H
#define __TREE_TO_STRING_H

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
    string tree2str(TreeNode* t) {
        if (t == nullptr)
            return "";
        string s = to_string(t->val); 
        string left = tree2str(t->left);
        string right = tree2str(t->right);
        if (left == "" && right == "")
            return s;
        if (right == "")
            return s+'('+left+')';
        return s+'('+left+')'+'('+right+')';
    }
};

#endif
