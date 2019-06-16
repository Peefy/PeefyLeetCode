
#ifndef __UNIQUE_PATHS_H
#define __UNIQUE_PATHS_H

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

static int a[101][101] = {0}; 
class Solution{
public:
    int uniquePaths(int m, int n){
        if (m <= 0 || n <= 0)
            return 0;
        else if (m == 1 || n == 1)
            return 1;
        else if (m == 2 && n == 2)
            return 2;
        else if ((m == 3 && n == 2) || (m == 2 && n == 3))
            return 3;
        if (a[m][n] > 0)
            return a[m][n];
        a[m - 1][n] = uniquePaths(m - 1, n);
        a[m][n - 1] = uniquePaths(m, n - 1);
        a[m][n] = a[m - 1][n] + a[m][n - 1];
        return a[m][n];
    }
};

#endif
