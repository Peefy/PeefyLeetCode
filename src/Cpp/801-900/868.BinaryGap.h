
#ifndef __BINARY_GAP_H
#define __BINARY_GAP_H

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
    int binaryGap(int N) {
        int dis = 0;
        int last = 0;
        int now = 1;
        while (N > 0){
            int bit = N & 0x01;
            if (bit == 1 && last == 0)
                last = now;
            else if (bit == 1){
                dis = max(dis, now - last);
                last = now;
            }
            N >>= 1;
            now += 1;
        }
        return dis;
    }
};

#endif

