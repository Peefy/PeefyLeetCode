
#ifndef __REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H
#define __REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H

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
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int k = 2;
        for (int n : nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
};

#endif
