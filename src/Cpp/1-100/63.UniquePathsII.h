
#ifndef __UNIQUE_PATHS_II_H
#define __UNIQUE_PATHS_II_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int w = obstacleGrid.size();
        if(w == 0 ) return 0;
        int h = obstacleGrid[0].size();
        long long  dp[w][h];
        dp[0][0] = obstacleGrid[0][0] == 0 ? 1 : 0;
        for(int i = 1;i< w;++i){
            dp[i][0]  =  obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
        }
        for(int j = 1;j< h;++j){
            dp[0][j]  =  obstacleGrid[0][j] == 1 ? 0 : dp[0][j-1];
        }
        for(int i = 1;i< w;++i){
            for(int j = 1;j<h;++j){
                dp[i][j]  =  obstacleGrid[i][j] == 1 ? 0 : dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[w-1][h-1];
    }
};

#endif
