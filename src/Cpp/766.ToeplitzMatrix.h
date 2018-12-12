
#ifndef __TOPPLITZ_MATRIX_H
#define __TOPPLITZ_MATRIX_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    bool isToeplitzMatrix(vector<vector<int>> &a){
        for (int i = 0; i < a.size() - 1; i++){
            for (int j = 0; j < a[i].size() - 1; j++){
                if (a[i][j] != a[i + 1][j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};

#endif
