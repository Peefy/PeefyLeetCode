
#ifndef __SURFACE_AREA_H
#define __SURFACE_AREA_H

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
    int surfaceArea(vector<vector<int>>& grid) {
        int result = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
};

#endif
