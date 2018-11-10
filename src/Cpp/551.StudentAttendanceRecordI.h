
#ifndef __CHECK_RECORD_H
#define __CHECK_RECORD_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;

static const auto io_speed_up = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool checkRecord(string s) {
        int Acount = 0;
        int Lcount = 0;
        for (char c : s){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
};

#endif
