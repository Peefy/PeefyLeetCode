
#ifndef __FLIP_AND_INVERT_IMAGE_H
#define __FLIP_AND_INVERT_IMAGE_H

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
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {   
        for(int i = 0; i < A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            for (int j = 0; j < A[0].size(); j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
};

#endif

