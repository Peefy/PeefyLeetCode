
#ifndef _IMAGE_SMOOTHER_H
#define _IMAGE_SMOOTHER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
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
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m = M.size();
        int n = M[0].size();
        vector<vector<int>> N(m, vector<int>(n));
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i][j] = M[i][j];
                if (i - 1 >= 0 && j - 1 >= 0)
                    N[i][j] += M[i - 1][j - 1], count += 1;
                if (i - 1 >= 0 && j + 1 < n)
                    N[i][j] += M[i - 1][j + 1], count += 1;
                if (j - 1 >= 0)
                    N[i][j] += M[i][j - 1], count += 1;
                if (j + 1 < n)
                    N[i][j] += M[i][j + 1], count += 1;
                if (i + 1 < m && j + 1 < n)
                    N[i][j] += M[i + 1][j + 1], count += 1;
                if (i + 1 < m && j - 1 >= 0)
                    N[i][j] += M[i + 1][j - 1], count += 1;
                if (i + 1 < m)
                    N[i][j] += M[i + 1][j], count += 1;
                if (i - 1 >= 0)
                    N[i][j] += M[i - 1][j], count += 1;
                N[i][j] /= count;
            }
        return N;
    }
};

#endif

