
#ifndef __PERFECT_BINARY_TREE_CONNECT_RIGHT_II_H
#define __PERFECT_BINARY_TREE_CONNECT_RIGHT_II_H

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
        if (root == NULL)
            return NULL;     
        Node *dummy = new Node(-1, NULL, NULL, NULL);
        Node *pre = dummy;
        Node *head = root;   
        while (root != NULL) {
            if (root->left) {
                pre->next = root->left;
                pre = pre->next;
            }
            if (root->right) {
                pre->next = root->right;
                pre = pre->next;
            }
            root = root->next;      
            if (root == NULL) {
                pre = dummy;
                root = dummy->next;
                dummy->next = NULL;
            }
        }
        return head;
    }
};

#endif
