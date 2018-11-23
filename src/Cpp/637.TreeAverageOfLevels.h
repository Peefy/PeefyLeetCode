
#ifndef __TREE_AVR_OF_LEVELS_H
#define __TREE_AVR_OF_LEVELS_H

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> r;
        if (root == nullptr)
            return r;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() > 0){
            double sum = 0;
            double l = q.size();
            for (int i = 0; i < l; ++i){
                auto node = q.front();
                q.pop();
                sum += node->val;
                if (node->left != nullptr)
                    q.push(node->left);
                if (node->right != nullptr)
                    q.push(node->right);
            }
            r.push_back(sum / l);
        }
        return r;
    }
};

#endif
