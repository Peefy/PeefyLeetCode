
#ifndef __LARGEST_TRIANGLE_AREA_H
#define __LARGEST_TRIANGLE_AREA_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
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
    double heran(vector<int> point1, vector<int> point2, vector<int> point3){
        int x1 = point1[0];
        int y1 = point1[1];
        int x2 = point2[0];
        int y2 = point2[1];
        int x3 = point3[0];
        int y3 = point3[1];
        return 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 *y3 - x2 * y1 - x3 * y2);
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();
        double area = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; ++j){
                for (int k = j + 1; k < n; ++k){
                    area = max(area, heran(points[i], points[j], points[k]));
                }
            }
        }
        return area;
    }
};

#endif

