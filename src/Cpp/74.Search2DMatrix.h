
#ifndef __SEARCH_2D_MATRIX_H
#define __SEARCH_2D_MATRIX_H

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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0){
            return false;
        }
        int n = matrix[0].size();
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
};

#endif