
#ifndef __MINIMUM_PATH_SUM_H
#define __MINIMUM_PATH_SUM_H

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

class Solution{
public:
    int minPathSum(vector<vector<int>> &grid){
        int line = grid.size();
        int column = grid[0].size();
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
};

#endif
