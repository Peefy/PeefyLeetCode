
#ifndef __TREE_LEVEL_ORDER_H
#define __TREE_LEVEL_ORDER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > r;
        queue<Node* > q;
        if (root == nullptr)
            return r;
        q.push(root);
        while (q.size() != 0) {
            vector<int> child;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                auto node = q.front();
                q.pop();
                child.push_back(node->val);
                for(Node* nn : node->children){
                    q.push(nn);
                }
            }
            r.push_back(child);
        }
        return r;
    }
};

#endif
