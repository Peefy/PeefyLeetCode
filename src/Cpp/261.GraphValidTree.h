
#ifndef __GRAPH_VALID_TREE_H
#define __GRAPH_VALID_TREE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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


class Solution {
public:
    bool validTree(int n, vector<pair<int, int>>& edges) {
        if(n != edges.size()+1) return false;
        vector<int> par(n);
        for(int i = 0; i < n; i++) par[i] = i;
        for(auto val: edges)
        {
            int par1 = val.first, par2 = val.second;
            while(par[par1] != par1) par1 = par[par1];
            while(par[par2] != par2) par2 = par[par2];
            if(par1 != par2) par[par2] = par1, n--;
        }
        return n==1;
    }
};


#endif
