
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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int length = flowerbed.size();
        flowerbed.push_back(0);
        int i = 0;
        while (i < length){         
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {              
                count += 1;
                i += 1;            
            }
            else if (flowerbed[i] == 1){
                i += 1;
            }
            i += 1;
        }
        return count >= n;
    }
};

#endif

