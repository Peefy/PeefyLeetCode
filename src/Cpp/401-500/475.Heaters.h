
#ifndef __HEATERS_H
#define __HEATERS_H

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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int n = heaters.size();
        int i = 0, length = 0;
        for (int house : houses) {
            while ((i >= n - 1 ? INT32_MAX : abs(heaters[i + 1] - house)) <= abs(heaters[i] - house)) {
                i++;
            }
            length = max(length, abs((i >= n ? INT32_MAX : heaters[i]) - house));
        }
        return length;
    }
};

#endif


