
#ifndef __SUMMARY_RANGES_H
#ifndef __SUMMARY_RANGES_H

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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> summary;
        for (int i = 0, j = 0; j < nums.size(); ++j) {
            if (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1)
                continue;
            if (i == j)
                summary.push_back(to_string(nums[i]) + "");
            else
                summary.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            i = j + 1;
        }
        return summary;
    }
};

#endif
