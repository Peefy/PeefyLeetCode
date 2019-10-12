
#ifndef __H_INDEX_H
#define __H_INDEX_H

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
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> bucket(n + 1, 0); 
        for (int c : citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
};


#endif
