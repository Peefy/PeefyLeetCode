
#ifndef __MAXIMAL_SQUARE_H
#ifndef __MAXIMAL_SQUARE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
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
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if (rows == 0)
            return 0;
        int cols = matrix[0].size();
        int maxn = 0;
        vector<vector<int>> dp(rows + 1, vector<int>(cols + 1, 0));
        for (size_t i = 1; i <= rows; i++){
            for (size_t j = 1; j <= cols; j++){
                if (matrix[i - 1][j - 1] == '1'){
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                    maxn = max(dp[i][j], maxn);
                }
            }      
        }
        return maxn * maxn;
    }
};


#endif
