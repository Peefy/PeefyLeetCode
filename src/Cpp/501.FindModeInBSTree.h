
#ifndef __FIND_MODE_IN_BST_H
#define __FIND_MODE_IN_BST_H

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

class Solution {
public:
    void bst2sortlist(TreeNode* root, vector<int> & list){
        if (root == nullptr)
            return;
        bst2sortlist(root->left, list);
        list.push_back(root->val);
        bst2sortlist(root->right, list);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> r;    
        if (root == nullptr) {
            return r;
        }
        vector<int> list;
        map<int, int> counter;
        bst2sortlist(root, list);
        for(auto val : list){
            counter[val]++; 
        }
        auto max = INT32_MIN;     
        for(auto i = counter.begin(); i != counter.end(); i++)
        {
            auto ele = *i;
            if (ele.second > max)
                max = ele.second;
        }
        for(auto i = counter.begin(); i != counter.end(); i++)
        {
            auto ele = *i;
            if (ele.second == max)
                r.push_back(ele.first);
        }
        return r;
    }
};

#endif
