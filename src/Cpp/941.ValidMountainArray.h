
#ifndef __VALID_MOUNTAIN_ARRAY_H
#define __VALID_MOUNTAIN_ARRAY_H

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

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int asc = 0; 
        int desc = 0;
        for(int i = 1; i < A.size(); i++){
            if (A[i - 1] < A[i]){
                if (desc == 0)
                    asc += 1;
            }
            else if (A[i - 1] > A[i])
                desc += 1;
        }
        return asc > 0 && desc > 0 && asc + desc + 1 == A.size();
    }
};

#endif

