
#ifndef __DELETE_COLUMNS_TO_MAKE_SORTED_H
#define __DELETE_COLUMNS_TO_MAKE_SORTED_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
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
    int minDeletionSize(vector<string>& A) {
        int m = A.size();
        int n = A[0].size();
        int count = 0;  
        for(int j = 0; j < n; j++){
            bool flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i][j] > A[i + 1][j]){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
};

#endif

