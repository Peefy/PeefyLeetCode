
#ifndef __SEARCH_RANGE_H
#define __SEARCH_RANGE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        for(int i = 0; i < 9; i++){
            for (int j = 0;j < 9;++j){
                if (board[i][j] == '.')
                    continue;
                char rowtmp[10] = "";
                sprintf(rowtmp, "%d(%c)", i, board[i][j]);
                if (s.find(rowtmp) != s.end())
                    return false;
                s.insert(rowtmp);

                char coltmp[10] = "";
                sprintf(coltmp, "(%c)%d", board[i][j], j);
                if (s.find(coltmp) != s.end())
                    return false;
                s.insert(coltmp);

                char gridtmp[10] = "";
                int m = (i / 3) * 3; 
                int n = (j / 3) * 3;
                sprintf(gridtmp, "%d(%c)%d",m, board[i][j], n);
                if (s.find(gridtmp) != s.end())
                    return false;
                s.insert(gridtmp);

            }
        }
        return true;
    }
};

#endif
