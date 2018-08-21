
#ifndef __INTERSECTION_OF_TWO_ARRAYS_II_H
#define __INTERSECTION_OF_TWO_ARRAYS_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty())
            return {};
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        return res;
    }
};

#endif
