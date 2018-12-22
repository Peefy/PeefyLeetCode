
#ifndef __RECTANGLE_OVERLAP_H
#define __RECTANGLE_OVERLAP_H

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
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return ((int64_t)rec2[0] - (int64_t)rec1[2]) * ((int64_t)rec2[2] - (int64_t)rec1[0]) < 0 && (
            (int64_t)rec2[1] - (int64_t)rec1[3]) * ((int64_t)rec2[3] - (int64_t)rec1[1]) < 0;   
    }
};

#endif

