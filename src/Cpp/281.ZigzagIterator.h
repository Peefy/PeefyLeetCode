
#ifndef __ZIGZAG_ITERATOR_H
#define __ZIGZAG_ITERATOR_H

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

class ZigzagIerator {
public:
    vector<vector<int>> vectors;
    int row, col, max;

    ZigzagIerator(vector<int>& v1, vector<int>& v2) {
        vectors.push_back(v1);
        vectors.push_back(v2);
        max = max(v1.size(), v2.size());
    }

    int next() {
        hasNext();
        return vectors[row++][col];
    }

    bool hasNext() {
        while (col < max) {
            while (row < vectors.size()) {
                if (col < vectors[row].size())
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
};

#endif
