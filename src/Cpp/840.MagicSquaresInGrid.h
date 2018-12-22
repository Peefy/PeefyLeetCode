
#ifndef __MAGIC_SQUARES_IN_GRID_H
#define __MAGIC_SQUARES_IN_GRID_H

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
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size() - 1;
        set<string> mat = {"43891276","83419672","67219834","27691438","49237816","29473618","61873294","81637492"};
        for(int i = 1; i < n; i++){
            for(int j = 1; j < n; j++){
                if (grid[i][j] == 5){
                    string m = string("");
                    m.push_back((char)(grid[i-1][j-1] + '0'));
                    m.push_back((char)(grid[i-1][j] + '0'));
                    m.push_back((char)(grid[i-1][j+1] + '0'));
                    m.push_back((char)(grid[i][j-1] + '0'));
                    m.push_back((char)(grid[i][j+1] + '0'));
                    m.push_back((char)(grid[i+1][j-1] + '0'));
                    m.push_back((char)(grid[i+1][j] + '0'));
                    m.push_back((char)(grid[i+1][j+1] + '0'));
                    if (mat.find(m) != mat.end())
                        ++count;
                }
            }
        }
        return count;
    }
};

#endif

