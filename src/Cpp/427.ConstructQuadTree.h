
#ifndef __ADD_STRINGS_H
#define __ADD_STRINGS_H

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
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {}

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

class ExNode : public Node {
public:
    bool isRand;
    ExNode(bool _isrand) : Node(){
        isRand = _isrand;
    }
};

class Solution {
public:
    ExNode* constuct_node(vector<vector<int> >& grid, int left, int top, int width){
        if (width == 1){
            ExNode* node = new ExNode(false);
            node->isLeaf = true;
            node->val = grid[top][left] == 1;
            return node;           
        }
        auto half_width = width / 2;
        auto topleft = this->constuct_node(grid, left, top, half_width);
        auto topright = this->constuct_node(grid, left + half_width, top, half_width);
        auto bottomleft = this->constuct_node(grid, left, top + half_width, half_width);
        auto bottomright = this->constuct_node(grid, left + half_width, top + half_width, half_width);
        auto node = new ExNode(false);
        if (topleft->val == true && topright->val == true 
            && bottomleft->val == true && bottomright->val == true && 
             topleft->isRand == false && topright->isRand == false && bottomleft->isRand == false && bottomright->isRand == false){
                node->val = true;
                node->isLeaf = true;
                return node;
        }
        if (topleft->val == false && topright->val == false 
            && bottomleft->val == false && bottomright->val == false){
                node->val = false;
                node->isLeaf = true;
                return node;
        }
        node->isRand = true;
        node->val = true;
        node->topLeft = topleft;
        node->topRight = topright;
        node->bottomLeft = bottomleft;
        node->bottomRight = bottomright;
        node->isLeaf = false;
        return node;
    }

    Node* construct(vector<vector<int> >& grid) {
        return this->constuct_node(grid, 0, 0, grid.size());
    }
};


#endif
