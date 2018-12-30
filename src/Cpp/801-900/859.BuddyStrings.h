
#ifndef __BUDDY_STRINGS_H
#define __BUDDY_STRINGS_H

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
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length())
            return false;
        vector<char> r;
        unordered_set<char> s;
        for (int i = 0;i < A.length();++i){
            s.insert(A[i]);
            if (A[i] != B[i]){
                r.push_back(A[i]);
                r.push_back(B[i]);
            }
        }
        if (r.size() == 0 and s.size() < A.length())
            return true;
        if (r.size() != 4)
            return false;
        return r[0] == r[3] && r[1] == r[2]; 
    }
};

#endif

