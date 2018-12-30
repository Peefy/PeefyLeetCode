
#ifndef __FAIR_CANDY_SWAP_H
#define __FAIR_CANDY_SWAP_H

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
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        unordered_set<int> setB;
        int sumA = 0, sumB = 0;
        for (int a : A){
            sumA += a;
        }
        for (int b : B){
            sumB += b;
            setB.insert(b);
        }
        int sub = (sumA - sumB) / 2;
        for (int a : A){
            if (setB.find(a - sub) != setB.end()){
                return vector<int> {a, a - sub};
            }
        }
        return vector<int> {0, 0 - sub};
    }
};

#endif
