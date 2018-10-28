

#ifndef __NUMBER_OF_BOOMERANGS_H
#define __NUMBER_OF_BOOMERANGS_H

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

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int booms = 0;
        for (auto &p : points) {
        unordered_map<int, int> ctr(points.size());
        for (auto &q : points)
            booms += 2 * ctr[pow((p.first - q.first),2) + 
                pow((p.second - q.second),2)]++;
        }
        return booms;
    }
};

#endif


