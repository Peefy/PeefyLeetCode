
#ifndef __CLONE_GRAPH_H
#define __CLONE_GRAPH_H

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
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    unordered_map<Node*, Node*> map;
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }

    Node* dfs(Node* node) {
        if(map.find(node) == map.end()){
            Node* copy = new Node(node->val, vector<Node*>());
            map[node] = copy;
            for(Node* nei : node->neighbors){
                copy->neighbors.push_back(dfs(nei)); 
            }
        }
        return map[node];
    }
};

#endif
