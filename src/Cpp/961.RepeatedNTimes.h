
#ifndef __REPEATED_N_TIMES_H
#define __REPEATED_N_TIMES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <string.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> a;
        for (int i : A){
            if (a.find(i) != a.end())
                return i;
            else
                a.insert(i);
        }
        return -1;
    }
};

#endif

