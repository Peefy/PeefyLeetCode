
#ifndef __RECTANGLE_AREA_H
#ifndef __RECTANGLE_AREA_H

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
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
                int area1 = abs(C-A) * abs(D-B);
        int area2 = abs(G-E) * abs(H-F);
        int x1 = max(A, E), x2 = min(C, G);
        int y1 = max(B, F), y2 = min(D, H);
        if(x2 <= x1 || y2 <= y1)
            return area1 + area2;
        else
            return area1 - (x2-x1)*(y2-y1) + area2;
    }
};


#endif
