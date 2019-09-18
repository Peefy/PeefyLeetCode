
#ifndef __PERFECT_BINARY_TREE_CONNECT_RIGHT_H
#define __PERFECT_BINARY_TREE_CONNECT_RIGHT_H

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


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};


class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr)
            return nullptr;
        vector<Node*> stack;
        stack.push_back(root);
        while (stack.size() > 0){
            vector<Node*> tmp;
            Node* lastnode = nullptr;
            for (Node* node : stack){
                node->next = lastnode;
                lastnode = node;
                if (node->right != nullptr)
                    tmp.push_back(node->right);
                if (node->left != nullptr)
                    tmp.push_back(node->left);
            }
            stack = tmp;
        }
        return root;
    }
};

#endif
