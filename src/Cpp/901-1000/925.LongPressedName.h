
#ifndef __LONG_PRESS_NAME_H
#define __LONG_PRESS_NAME_H

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
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        for(int j = 0; j < typed.length(); j++){
            if (i < name.length() && name[i] == typed[j])
                i += 1;
            else if (j == 0 || typed[j] != typed[j - 1])
                return false;
        }
        return i == name.length();
    }
};

#endif

