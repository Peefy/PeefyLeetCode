
#ifndef _CAN_PLACE_FLOWERS_H
#define _CAN_PLACE_FLOWERS_H

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
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max_1 = -1000;
        int max_2 = -1000;
        int max_3 = -1000;
        int min_1 = 1000;
        int min_2 = 1000;
        for (int num : nums) {
            if (num > max_1){
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2){
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
                max_3 = num;
            if (num < min_1){
                min_2 = min_1;
                min_1 = num;
            }
            else if (num < min_2)
                min_2 = num;
        }
        return max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
    }
};

#endif

