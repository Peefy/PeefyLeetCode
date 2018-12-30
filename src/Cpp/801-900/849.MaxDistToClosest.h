
#ifndef __MAX_DIST_TO_CLOSEAT_H
#define __MAX_DIST_TO_CLOSEAT_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
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
    int maxDistToClosest(vector<int>& seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(size_t i = 0; i < seats.size(); i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(size_t i = 0; i < seats.size(); i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return max((maxcount + 1) / 2, max(count, firstindex));
    }
};

#endif

