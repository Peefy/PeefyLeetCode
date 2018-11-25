
#ifndef _ROBOT_RETURN_TO_ORIGIN_H
#define _ROBOT_RETURN_TO_ORIGIN_H

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
    bool judgeCircle(string moves) {
        int lcount = 0;
        int rcount = 0;
        int ucount = 0;
        int dcount = 0;
        for (char c : moves) {
            if (c == 'L')
                lcount++;
            else if (c == 'R')
                rcount++;
            else if (c == 'U')
                ucount++;
            else if (c == 'D'){
                dcount++;
            }       
        }
        return lcount == rcount && ucount == dcount;
    }
};

#endif

