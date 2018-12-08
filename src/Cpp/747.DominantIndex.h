
#ifndef __DOMINANT_INDEX_H
#define __DOMINANT_INDEX_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
};

#endif
