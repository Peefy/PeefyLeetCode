
#ifndef __SEARCH_2D_MATRIX_II_H
#define __SEARCH_2D_MATRIX_II_H

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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) {
            return false;
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX][posY] == target) {
                return true;
            }
            if (matrix[posX][posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
};

#endif
