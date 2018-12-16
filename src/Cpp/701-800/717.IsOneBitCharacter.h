
#ifndef __IS_ONE_BIT_CHARACTER_H
#define __IS_ONE_BIT_CHARACTER_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
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
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();
        while (i < n - 1) 
            i += bits[i] == 1 ? 2 : 1;
        return i != n;
    }
};


#endif
