
#ifndef __SPIRAL_MATRIX_H
#define __SPIRAL_MATRIX_H

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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size() == 0)
            return ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = 0;
        int lrbound[2] = {0, m};
        int udbound[2] = {0, n};
        int shunxu = 0;
        while (ans.size() < m * n){
            if (shunxu == 0){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    i += 1;
                }
                j += 1;
                i -= 1;
                udbound[0] += 1;
                shunxu = 1;
            }
            else if (shunxu == 1){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    j += 1;
                }
                i -= 1;
                j -= 1;
                lrbound[1] -= 1;
                shunxu = 2;
            }
            else if (shunxu == 2){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    i -= 1;
                }
                j -= 1;
                i += 1;
                udbound[1] -= 1;
                shunxu = 3;
            }
            else{
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    j -= 1;
                }
                i += 1;
                j += 1;
                lrbound[0] += 1;
                shunxu = 0;
            }
        }
        return ans;
    }
};

#endif
