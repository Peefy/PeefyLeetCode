
#ifndef __UNIQUE_BINARY_SEARCH_TREE_II_H
#define __UNIQUE_BINARY_SEARCH_TREE_II_H

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
    cin.tie(NULL);
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
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0)
            return vector<TreeNode*>{};
        return helper(1,n);
    }
    vector<TreeNode*> helper(int begin, int end)
    {
        vector<TreeNode*> res;
        if (begin > end)
        {
            res.push_back(NULL);
            return res;
        }
        for (int i = begin; i <= end; ++i)
        {
            vector<TreeNode*> left_trees = helper(begin, i-1);
            vector<TreeNode*> right_trees = helper(i+1, end);
            for (auto l : left_trees)
            {
                for (auto r : right_trees)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
            }

        }
        return res;
    }
};

#endif
