
#ifndef __LARGE_GROUP_POSITION_H
#define __LARGE_GROUP_POSITION_H

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
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> r;
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.length() - 1; i++) {
            if (S[i] != S[i + 1]){
                if (count >= ISBIG - 1){
                    r.push_back(vector<int>{lastindex, lastindex + count});
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
};

#endif

