
#ifndef __TRANSPOSE_MATRIX_H
#define __TRANSPOSE_MATRIX_H

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
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result(A[0].size(), vector<int>(A.size()));
        for (int j = 0; j < A[0].size(); j++) {
            for (int i = 0; i < A.size(); i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
};

#endif

