
#ifndef __ISLAND_PERIMETER_H
#define __ISLAND_PERIMETER_H

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
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1][j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i][j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
};

#endif


