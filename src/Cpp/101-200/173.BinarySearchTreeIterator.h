
#ifndef __BINARY_SEARCH_TREE_ITERATOR_H
#define __BINARY_SEARCH_TREE_ITERATOR_H

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


class BSTIterator {
    stack<TreeNode*> tree_stack;
public:
    BSTIterator(TreeNode* root) {
        while(root){
            tree_stack.push(root);
            root = root->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* cur = tree_stack.top();
        tree_stack.pop();
        int res = cur->val;
        cur = cur->right;
        while(cur){
            tree_stack.push(cur);
            cur = cur->left;
        }
        return res;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !tree_stack.empty();
    }
};



#endif
