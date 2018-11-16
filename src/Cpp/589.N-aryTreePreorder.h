
#ifndef __DISTRIBUTE_CANDIES_H
#define __DISTRIBUTE_CANDIES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> list;
    void trans(Node* node){
        if (node == nullptr) {
            return;
        }
        list.push_back(node->val);
        for(auto node : node->children)
        {
            trans(node);
        }
    }

    vector<int> preorder(Node* root) {
        list.clear();
        trans(root);
        return list;
    }
};

#endif
