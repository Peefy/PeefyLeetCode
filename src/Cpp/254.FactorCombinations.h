
#ifndef __FACTOR_COMBINATIONS_H
#define __FACTOR_COMBINATIONS_H

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
private:
    void find(int from, int n, vector<int> & factors, int len, vector<vector<int> > & results) {
        for(int i = from; i * i <= n; i++) {
            if (n % i == 0) {
                factors[len] = i;
                find(i, n/i, factors, len+1, results);
            }
        }
        if (len > 0) {
            factors[len] = n;
            vector<int> f(len + 1, 0);
            for(int i = 0; i <= len; i++) 
                f[i] = factors[i];
            results.push_back(f);
        }
    }
public:
    vector<vector<int> > getFactors(int n) {
        int p = 0;
        for(int i = 1; i <= n; p++, i *= 2);
        vector<vector<int> > results;
        vector<int> factors(p, 0);
        find(2, n, factors, 0, results);
        return results;
    }
};


#endif
