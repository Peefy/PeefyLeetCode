
#ifndef __JUMP_GAME_H
#define __JUMP_GAME_H

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
    bool canJump(vector<int>& nums) {
        int i = nums.size() - 1;
        for(int j = nums.size() - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
};

#endif
