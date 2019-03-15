
#ifndef __SPIRAL_MATRIX_II_H
#define __SPIRAL_MATRIX_II_H

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
    vector<vector<int>> generateMatrix(int n) {
        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = n - 1;
        vector<vector<int>> result = vector<vector<int>>(n, vector<int>(n, 0));
        int count = 1;
        while (row_start <= row_end && col_start <= col_end){
            for (int i = col_start;i < col_end + 1;i++){
                result[row_start][i] = count;
                count += 1;
            }
            row_start += 1;
            for (int i = row_start;i < row_end + 1;i++){
                result[i][col_end] = count;
                count += 1;
            }
            col_end -= 1;
            for (int i = col_end;i > col_start - 1;i--){
                result[row_end][i] = count;
                count += 1;
            }
            row_end -= 1;
            for (int i = row_end;i > row_start - 1;i--){
                result[i][col_start] = count;
                count += 1;
            }
            col_start += 1;
        }
        return result;
    }
};

#endif
