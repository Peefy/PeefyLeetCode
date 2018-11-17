
#ifndef __MAXIMUM_DEPTH_OF_NARYTREE_H
#define __MAXIMUM_DEPTH_OF_NARYTREE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <algorithm>

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

class Solution {
public:
    int maxDepth(Node* root) {
        if( root == nullptr ) return 0;
        int dep = 0;
        for( auto now : root->children )
            dep = max( dep , maxDepth( now ));
        return dep + 1 ; 
    }
};

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

#endif
