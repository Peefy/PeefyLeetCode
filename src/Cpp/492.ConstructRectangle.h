
#ifndef _CONSTRUCT_RECTANGLE_H
#define _CONSTRUCT_RECTANGLE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    vector<int> constructRectangle(int area) {
        for (int i = (int)sqrt(area); i > 0; i--) {
            if (area % i == 0)
                return vector<int>{area / i, i};
        }
        return vector<int>{area, 1};
    }
};

#endif
