
#ifndef __GAME_OF_LIFE_H
#define __GAME_OF_LIFE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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
    void gameOfLife(vector<vector<int> >& board) {
        int n = board.size();
        int m = board[0].size();
        int DX[] = {0, 0, 1, -1, 1, 1, -1, -1};
        int DY[] = {1, -1, 0, 0, 1, -1, 1, -1};
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < m; j++) {
                int cnt = 0;
                for (size_t k = 0; k < 8; k++){
                    int x = i + DX[k];
                    int y = j + DY[k];
                    if (x < 0 || x >= n || y < 0 || y >= m)
                        continue;
                    cnt += board[x][y] & 1;
                }
                if ((board[i][j] & 1) > 0){
                    if (cnt >= 2 && cnt <= 3)
                        board[i][j] = 0b11;
                }
                else if (cnt == 3)
                    board[i][j] = 0b10;
            } 
        }
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < m; j++) {
                board[i][j] >>= 1;
            } 
        }
    }
};

#endif
