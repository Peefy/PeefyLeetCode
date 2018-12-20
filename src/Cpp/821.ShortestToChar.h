
#ifndef __SHORTEST_TO_CHAR_H
#define __SHORTEST_TO_CHAR_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        deque<int> indexlist;
        vector<int> r;   
        int j = 1;
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S[i])
                indexlist.push_back(i);
        }
        indexlist.push_front(-10000);
        indexlist.push_back(10000); 
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S[i]){
                r.push_back(0);
                ++j;
            }
            else
                r.push_back(min(i - indexlist[j - 1], indexlist[j] - i));
        }
        return r;
    }
};

#endif

