
#ifndef __PROJECT_AREA_H
#define __PROJECT_AREA_H

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
    int projectionArea(vector<vector<int>>& grid) {
        int area = 0;
        for (int i = 0; i < grid.size(); i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = max(yz, grid[i][j]);
                xz = max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
};

#endif

